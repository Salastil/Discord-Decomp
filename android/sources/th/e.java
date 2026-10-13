package th;

import android.os.Bundle;
import android.os.Parcel;
import android.os.RemoteException;
import com.discord.js_watchdog.SharedPreferencesKey;

/* loaded from: classes3.dex */
public final class e extends uh.o {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f18433e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f18434i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ jg.g f18435v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ int f18436w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ m f18437x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(m mVar, jg.g gVar, int i5, String str, jg.g gVar2, int i6) {
        super(gVar);
        this.f18433e = i5;
        this.f18434i = str;
        this.f18435v = gVar2;
        this.f18436w = i6;
        this.f18437x = mVar;
    }

    @Override // uh.o
    public final void a() {
        m mVar = this.f18437x;
        try {
            uh.k kVar = mVar.f18506d.f18930m;
            String str = mVar.a;
            int i5 = this.f18433e;
            String str2 = this.f18434i;
            Bundle bundle = new Bundle();
            bundle.putInt(SharedPreferencesKey.SESSION_ID, i5);
            bundle.putString("module_name", str2);
            Bundle h6 = m.h();
            k kVar2 = new k(mVar, this.f18435v, this.f18433e, this.f18434i, this.f18436w);
            uh.i iVar = (uh.i) kVar;
            Parcel b10 = iVar.b();
            b10.writeString(str);
            int i6 = uh.h.a;
            b10.writeInt(1);
            bundle.writeToParcel(b10, 0);
            b10.writeInt(1);
            h6.writeToParcel(b10, 0);
            b10.writeStrongBinder(kVar2);
            iVar.k(7, b10);
        } catch (RemoteException e9) {
            m.f18502g.d(e9, "notifyModuleCompleted", new Object[0]);
        }
    }
}
