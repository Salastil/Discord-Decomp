package th;

import android.os.Bundle;
import android.os.Parcel;
import android.os.RemoteException;
import com.discord.js_watchdog.SharedPreferencesKey;

/* loaded from: classes3.dex */
public final class f extends uh.o {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f18445e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ jg.g f18446i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ m f18447v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(m mVar, jg.g gVar, int i5, jg.g gVar2) {
        super(gVar);
        this.f18445e = i5;
        this.f18446i = gVar2;
        this.f18447v = mVar;
    }

    @Override // uh.o
    public final void a() {
        m mVar = this.f18447v;
        try {
            uh.k kVar = mVar.f18506d.f18930m;
            String str = mVar.a;
            int i5 = this.f18445e;
            Bundle bundle = new Bundle();
            bundle.putInt(SharedPreferencesKey.SESSION_ID, i5);
            Bundle h6 = m.h();
            i iVar = new i(mVar, this.f18446i, 3);
            uh.i iVar2 = (uh.i) kVar;
            Parcel b10 = iVar2.b();
            b10.writeString(str);
            int i6 = uh.h.a;
            b10.writeInt(1);
            bundle.writeToParcel(b10, 0);
            b10.writeInt(1);
            h6.writeToParcel(b10, 0);
            b10.writeStrongBinder(iVar);
            iVar2.k(9, b10);
        } catch (RemoteException e9) {
            m.f18502g.d(e9, "notifySessionFailed", new Object[0]);
        }
    }
}
