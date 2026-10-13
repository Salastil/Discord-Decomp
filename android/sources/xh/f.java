package xh;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.Process;
import di.a0;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class f extends ag.a {

    /* renamed from: g, reason: collision with root package name */
    public final a0 f20467g;

    /* renamed from: h, reason: collision with root package name */
    public final jg.g f20468h;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ g f20469i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(g gVar, jg.g gVar2) {
        super("com.google.android.play.core.integrity.protocol.IIntegrityServiceCallback", 5);
        Objects.requireNonNull(gVar);
        this.f20469i = gVar;
        this.f20467g = new a0("OnRequestIntegrityTokenCallback");
        this.f20468h = gVar2;
    }

    @Override // ag.a
    public final boolean r(int i5, Parcel parcel) {
        if (i5 != 2) {
            return false;
        }
        Parcelable.Creator creator = Bundle.CREATOR;
        Bundle bundle = (Bundle) di.r.a(parcel);
        di.r.b(parcel);
        g gVar = this.f20469i;
        di.c cVar = gVar.f20473e;
        jg.g gVar2 = this.f20468h;
        cVar.c(gVar2);
        this.f20467g.b("onRequestIntegrityToken", new Object[0]);
        gVar.f20472d.getClass();
        int i6 = bundle.getInt("error");
        a aVar = null;
        if (i6 != 0) {
            bundle.getBoolean("is.error.remediable");
            aVar = new a(i6, null);
        }
        if (aVar != null) {
            gVar2.c(aVar);
            return true;
        }
        String string = bundle.getString("token");
        if (string == null) {
            gVar2.c(new a(-100, null));
            return true;
        }
        bundle.getLong("request.token.sid");
        s4.h.d(Process.myUid(), "UID: [", Process.myPid(), "]  PID: [", "] ").concat("IntegrityDialogWrapper");
        gVar2.d(new i(string));
        return true;
    }
}
