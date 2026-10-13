package th;

import android.os.Bundle;
import android.os.Parcel;
import android.os.RemoteException;
import com.discord.js_watchdog.SharedPreferencesKey;

/* loaded from: classes3.dex */
public final class d extends uh.o {
    public final /* synthetic */ m E;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f18414e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f18415i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ String f18416v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ String f18417w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ int f18418x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ jg.g f18419y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ d(m mVar, jg.g gVar, int i5, String str, String str2, int i6, jg.g gVar2, int i10) {
        super(gVar);
        this.f18414e = i10;
        this.f18415i = i5;
        this.f18416v = str;
        this.f18417w = str2;
        this.f18418x = i6;
        this.f18419y = gVar2;
        this.E = mVar;
    }

    @Override // uh.o
    public final void a() {
        int i5 = this.f18414e;
        m mVar = this.E;
        int i6 = this.f18415i;
        String str = this.f18416v;
        String str2 = this.f18417w;
        int i10 = this.f18418x;
        jg.g gVar = this.f18419y;
        int i11 = 1;
        switch (i5) {
            case 0:
                try {
                    uh.k kVar = mVar.f18506d.f18930m;
                    String str3 = mVar.a;
                    Bundle bundle = new Bundle();
                    bundle.putInt(SharedPreferencesKey.SESSION_ID, i6);
                    bundle.putString("module_name", str);
                    bundle.putString("slice_id", str2);
                    bundle.putInt("chunk_number", i10);
                    Bundle h6 = m.h();
                    i iVar = new i(mVar, gVar, 2);
                    uh.i iVar2 = (uh.i) kVar;
                    Parcel b10 = iVar2.b();
                    b10.writeString(str3);
                    int i12 = uh.h.a;
                    b10.writeInt(1);
                    bundle.writeToParcel(b10, 0);
                    b10.writeInt(1);
                    h6.writeToParcel(b10, 0);
                    b10.writeStrongBinder(iVar);
                    iVar2.k(6, b10);
                    break;
                } catch (RemoteException e9) {
                    m.f18502g.d(e9, "notifyChunkTransferred", new Object[0]);
                }
            default:
                try {
                    uh.k kVar2 = mVar.f18506d.f18930m;
                    String str4 = mVar.a;
                    Bundle bundle2 = new Bundle();
                    bundle2.putInt(SharedPreferencesKey.SESSION_ID, i6);
                    bundle2.putString("module_name", str);
                    bundle2.putString("slice_id", str2);
                    bundle2.putInt("chunk_number", i10);
                    Bundle h7 = m.h();
                    i iVar3 = new i(mVar, gVar, i11);
                    uh.i iVar4 = (uh.i) kVar2;
                    Parcel b11 = iVar4.b();
                    b11.writeString(str4);
                    int i13 = uh.h.a;
                    b11.writeInt(1);
                    bundle2.writeToParcel(b11, 0);
                    b11.writeInt(1);
                    h7.writeToParcel(b11, 0);
                    b11.writeStrongBinder(iVar3);
                    iVar4.k(11, b11);
                    break;
                } catch (RemoteException e10) {
                    m.f18502g.b("getChunkFileDescriptor(%s, %s, %d, session=%d)", str, str2, Integer.valueOf(i10), Integer.valueOf(i6));
                    gVar.c(new RuntimeException(e10));
                    return;
                }
        }
    }
}
