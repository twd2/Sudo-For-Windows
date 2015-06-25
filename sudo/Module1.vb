Imports SudoHelper

Module Module1

    Sub Main()
        If Command() = "" Then
            Return
        End If
        Helper.Sys(Command(), True)
    End Sub

End Module
