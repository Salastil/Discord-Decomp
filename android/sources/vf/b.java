package vf;

import android.content.Context;
import android.content.Intent;
import android.os.Parcelable;
import bg.m1;
import com.google.android.gms.common.api.Status;

/* loaded from: classes3.dex */
public final class b extends ze.i {

    /* renamed from: l, reason: collision with root package name */
    public static final e4.e f19409l = new e4.e("Auth.Api.Identity.SignIn.API", new m1(9), new ze.d());
    public final String k;

    public b(Context context, se.h hVar) {
        super(context, null, f19409l, hVar, ze.h.f21206c);
        this.k = e.a();
    }

    public final se.g c(Intent intent) {
        Status status = Status.f5656y;
        if (intent == null) {
            throw new ze.e(status);
        }
        Parcelable.Creator<Status> creator = Status.CREATOR;
        byte[] byteArrayExtra = intent.getByteArrayExtra("status");
        Status status2 = (Status) (byteArrayExtra == null ? null : zk.a.m(byteArrayExtra, creator));
        if (status2 == null) {
            throw new ze.e(Status.F);
        }
        if (status2.f5657d > 0) {
            throw new ze.e(status2);
        }
        Parcelable.Creator<se.g> creator2 = se.g.CREATOR;
        byte[] byteArrayExtra2 = intent.getByteArrayExtra("sign_in_credential");
        se.g gVar = (se.g) (byteArrayExtra2 != null ? zk.a.m(byteArrayExtra2, creator2) : null);
        if (gVar != null) {
            return gVar;
        }
        throw new ze.e(status);
    }
}
