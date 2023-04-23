using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Health : MonoBehaviour
{
    [SerializeField] private float _maxHealthe;
    [SerializeField] private float _currentHealthe;
    [SerializeField] private TextMeshProUGUI _hpText;
    [SerializeField] private Animator _aimDead;
    [SerializeField] private GameObject _player;
    [SerializeField] private PlayInput _enable;
    private bool isAlive;

    private void Awake()
    {
        _currentHealthe = _maxHealthe;
        isAlive = true;
    }

    private void Update()
    {
        if(_currentHealthe >=0)
            _hpText.text = _currentHealthe.ToString();

        if (!isAlive)
        {
            _aimDead.SetTrigger("Isdead");
            _player.layer = LayerMask.NameToLayer("Invize");
            _enable.enabled = false;
        }
    }

    public void TakeDamage(float damage)
    {
        _currentHealthe -= damage;
        CheckIsAlive();
    }

    private void CheckIsAlive()
    {
        if (_currentHealthe > 0)
        {
            isAlive = true;
        }

        else
        {
            isAlive = false;
        }
    }
}
