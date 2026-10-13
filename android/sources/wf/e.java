package wf;

import android.os.IBinder;
import android.os.IInterface;

/* loaded from: classes3.dex */
public final class e extends bf.e {
    @Override // bf.e, ze.c
    public final int h() {
        return 12451000;
    }

    @Override // bf.e
    public final /* synthetic */ IInterface l(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.auth.api.phone.internal.ISmsRetrieverApiService");
        return queryLocalInterface instanceof d ? (d) queryLocalInterface : new d(iBinder);
    }

    @Override // bf.e
    public final ye.d[] m() {
        return b.f19823b;
    }

    @Override // bf.e
    public final String p() {
        return "com.google.android.gms.auth.api.phone.internal.ISmsRetrieverApiService";
    }

    @Override // bf.e
    public final String q() {
        return "com.google.android.gms.auth.api.phone.service.SmsRetrieverApiService.START";
    }

    @Override // bf.e
    public final boolean s() {
        return true;
    }
}
