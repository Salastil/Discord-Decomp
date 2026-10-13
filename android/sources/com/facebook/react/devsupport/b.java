package com.facebook.react.devsupport;

import android.app.AlertDialog;
import android.view.View;
import com.facebook.react.devsupport.interfaces.DevSupportManager;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4891d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4892e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f4891d = i5;
        this.f4892e = obj;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f4891d) {
            case 0:
                ((AlertDialog) this.f4892e).dismiss();
                break;
            default:
                ((DevSupportManager.PausedInDebuggerOverlayCommandListener) this.f4892e).onResume();
                break;
        }
    }
}
