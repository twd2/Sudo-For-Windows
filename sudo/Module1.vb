Module Module1

    Sub Main()
        If Command() = "" Then
            Return
        End If
        Shell(Command(), AppWinStyle.NormalFocus)
    End Sub

End Module
