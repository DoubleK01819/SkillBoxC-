using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Invize : MonoBehaviour
{
    [SerializeField] private SpriteRenderer _player;
    [SerializeField] private float _timePausButton;
    [SerializeField] private float _maxTimePausButton;
    [SerializeField] private Color color;
    [SerializeField] private TextMeshProUGUI _textTimer;
    [SerializeField] private GameObject _timerCanvas;
    [SerializeField] private GameObject _playerCollider;
    private bool isCheckButton = true;

    private void Start()
    {
        color = _player.color;
    }
    private void Update()
    {
        if (isCheckButton)
        {
            _timePausButton = _maxTimePausButton;
            _timerCanvas.SetActive(false);
            if (Input.GetButtonDown(GlobalStringVars.FIRE2))
            {
                _playerCollider.SetActive(false);
                color.a = 0.5f;
                _player.color = color;
                isCheckButton = false;
            }
        }

        else if (!isCheckButton) 
        {
            _timerCanvas.SetActive(true);
            _timePausButton -= Time.deltaTime;
            _textTimer.text = Mathf.Round(_timePausButton).ToString();
            if(_timePausButton <= 0)
            {
                _playerCollider.SetActive(true);
                color.a = 1;
                _player.color = color;
                isCheckButton = true;
            }
        }

    }
}
