using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayInput : MonoBehaviour
{
    private PlayerMovement _playerMovement;

    private void Awake()
    {
        _playerMovement = GetComponent<PlayerMovement>();
    }

    private void Update()
    {
        float horizontalDirection = Input.GetAxis(GlobalStringVars.HORIZONTAL_AXIS);
        bool isJumpButtonPressed = Input.GetButtonDown(GlobalStringVars.JUMP);
        _playerMovement.Move(horizontalDirection, isJumpButtonPressed);
    }
}
