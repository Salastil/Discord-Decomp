package th;

import android.app.Notification;
import android.content.ComponentName;
import android.content.Context;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;
import android.os.RemoteException;
import com.google.android.play.core.assetpacks.ExtractionForegroundService;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class g0 implements ServiceConnection {

    /* renamed from: d, reason: collision with root package name */
    public final a5.m f18454d = new a5.m("ExtractionForegroundServiceConnection", 3);

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f18455e = new ArrayList();

    /* renamed from: i, reason: collision with root package name */
    public final Context f18456i;

    /* renamed from: v, reason: collision with root package name */
    public ExtractionForegroundService f18457v;

    /* renamed from: w, reason: collision with root package name */
    public Notification f18458w;

    public g0(Context context) {
        this.f18456i = context;
    }

    public final void a() {
        ArrayList arrayList;
        synchronized (this.f18455e) {
            arrayList = new ArrayList(this.f18455e);
            this.f18455e.clear();
        }
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            uh.m mVar = (uh.m) arrayList.get(i5);
            try {
                Bundle bundle = new Bundle();
                Bundle bundle2 = new Bundle();
                Parcel b10 = mVar.b();
                int i6 = uh.h.a;
                b10.writeInt(1);
                bundle.writeToParcel(b10, 0);
                b10.writeInt(1);
                bundle2.writeToParcel(b10, 0);
                mVar.k(2, b10);
            } catch (RemoteException unused) {
                this.f18454d.b("Could not resolve Play Store service state update callback.", new Object[0]);
            }
        }
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        this.f18454d.a("Starting foreground installation service.", new Object[0]);
        ExtractionForegroundService extractionForegroundService = ((f0) iBinder).f18448f;
        this.f18457v = extractionForegroundService;
        extractionForegroundService.startForeground(-1883842196, this.f18458w);
        a();
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
    }
}
