package th;

import android.content.Context;
import android.content.Intent;
import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.play.core.assetpacks.ExtractionForegroundService;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class o extends ag.a {

    /* renamed from: g, reason: collision with root package name */
    public final a5.m f18534g;

    /* renamed from: h, reason: collision with root package name */
    public final Context f18535h;

    /* renamed from: i, reason: collision with root package name */
    public final s f18536i;
    public final s1 j;
    public final g0 k;

    /* renamed from: l, reason: collision with root package name */
    public final e1 f18537l;

    public o(Context context, s sVar, s1 s1Var, g0 g0Var, e1 e1Var) {
        super("com.google.android.play.core.assetpacks.protocol.IAssetPackExtractionService", 6);
        this.f18534g = new a5.m("AssetPackExtractionService", 3);
        this.f18535h = context;
        this.f18536i = sVar;
        this.j = s1Var;
        this.k = g0Var;
        this.f18537l = e1Var;
    }

    @Override // ag.a
    public final boolean r(int i5, Parcel parcel) {
        String[] packagesForUid;
        uh.m mVar = null;
        if (i5 != 2) {
            if (i5 != 3) {
                return false;
            }
            Parcelable.Creator creator = Bundle.CREATOR;
            IBinder readStrongBinder = parcel.readStrongBinder();
            if (readStrongBinder != null) {
                IInterface queryLocalInterface = readStrongBinder.queryLocalInterface("com.google.android.play.core.assetpacks.protocol.IAssetPackExtractionServiceCallback");
                mVar = queryLocalInterface instanceof uh.m ? (uh.m) queryLocalInterface : new uh.m(readStrongBinder);
            }
            uh.h.b(parcel);
            this.f18534g.a("clearAssetPackStorage AIDL call", new Object[0]);
            Context context = this.f18535h;
            if (!uh.c.a(context) || (packagesForUid = context.getPackageManager().getPackagesForUid(Binder.getCallingUid())) == null || !Arrays.asList(packagesForUid).contains("com.android.vending")) {
                mVar.n(new Bundle());
                return true;
            }
            s.g(this.f18536i.d());
            Bundle bundle = new Bundle();
            Parcel b10 = mVar.b();
            b10.writeInt(1);
            bundle.writeToParcel(b10, 0);
            mVar.k(4, b10);
            return true;
        }
        Parcelable.Creator creator2 = Bundle.CREATOR;
        Bundle bundle2 = (Bundle) uh.h.a(parcel);
        IBinder readStrongBinder2 = parcel.readStrongBinder();
        if (readStrongBinder2 != null) {
            IInterface queryLocalInterface2 = readStrongBinder2.queryLocalInterface("com.google.android.play.core.assetpacks.protocol.IAssetPackExtractionServiceCallback");
            mVar = queryLocalInterface2 instanceof uh.m ? (uh.m) queryLocalInterface2 : new uh.m(readStrongBinder2);
        }
        uh.h.b(parcel);
        synchronized (this) {
            this.f18534g.a("updateServiceState AIDL call", new Object[0]);
            if (uh.c.a(this.f18535h)) {
                String[] packagesForUid2 = this.f18535h.getPackageManager().getPackagesForUid(Binder.getCallingUid());
                if (packagesForUid2 != null && Arrays.asList(packagesForUid2).contains("com.android.vending")) {
                    int i6 = bundle2.getInt("action_type");
                    g0 g0Var = this.k;
                    synchronized (g0Var.f18455e) {
                        g0Var.f18455e.add(mVar);
                    }
                    if (i6 == 1) {
                        this.f18537l.b(bundle2);
                        this.j.e(true);
                        this.k.f18458w = this.f18537l.a(bundle2);
                        this.f18535h.bindService(new Intent(this.f18535h, (Class<?>) ExtractionForegroundService.class), this.k, 1);
                        return true;
                    }
                    if (i6 != 2) {
                        this.f18534g.b("Unknown action type received: %d", Integer.valueOf(i6));
                        mVar.n(new Bundle());
                        return true;
                    }
                    this.j.e(false);
                    g0 g0Var2 = this.k;
                    g0Var2.f18454d.a("Stopping foreground installation service.", new Object[0]);
                    g0Var2.f18456i.unbindService(g0Var2);
                    ExtractionForegroundService extractionForegroundService = g0Var2.f18457v;
                    if (extractionForegroundService != null) {
                        synchronized (extractionForegroundService) {
                            extractionForegroundService.stopForeground(true);
                            extractionForegroundService.stopSelf();
                        }
                    }
                    g0Var2.a();
                    return true;
                }
            }
            mVar.n(new Bundle());
            return true;
        }
    }
}
