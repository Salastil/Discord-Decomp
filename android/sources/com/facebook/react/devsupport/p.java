package com.facebook.react.devsupport;

import android.content.DialogInterface;

/* loaded from: classes3.dex */
public final /* synthetic */ class p implements DialogInterface.OnCancelListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4931d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4932e;

    public /* synthetic */ p(int i5, Object obj) {
        this.f4931d = i5;
        this.f4932e = obj;
    }

    @Override // android.content.DialogInterface.OnCancelListener
    public final void onCancel(DialogInterface dialogInterface) {
        switch (this.f4931d) {
            case 0:
                DevSupportManagerBase.showDevOptionsDialog$lambda$26((DevSupportManagerBase) this.f4932e, dialogInterface);
                break;
            case 1:
                LogBoxDialogSurfaceDelegate.show$lambda$1$lambda$0((LogBoxDialogSurfaceDelegate) this.f4932e, dialogInterface);
                break;
            default:
                RedBoxDialogSurfaceDelegate.show$lambda$4$lambda$3((RedBoxDialogSurfaceDelegate) this.f4932e, dialogInterface);
                break;
        }
    }
}
