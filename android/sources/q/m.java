package q;

import android.os.Binder;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.Parcel;
import com.discord.chrome_custom_tabs.TrackedCustomTab$engagementSignalsCallback$1;

/* loaded from: classes.dex */
public final class m extends Binder implements b.e {

    /* renamed from: f, reason: collision with root package name */
    public final Handler f16642f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ n f16643g;

    public m(TrackedCustomTab$engagementSignalsCallback$1 trackedCustomTab$engagementSignalsCallback$1) {
        this.f16643g = trackedCustomTab$engagementSignalsCallback$1;
        attachInterface(this, b.e.f2700c);
        this.f16642f = new Handler(Looper.getMainLooper());
    }

    @Override // android.os.Binder
    public final boolean onTransact(int i5, Parcel parcel, Parcel parcel2, int i6) {
        final boolean z5;
        String str = b.e.f2700c;
        if (i5 >= 1 && i5 <= 16777215) {
            parcel.enforceInterface(str);
        }
        if (i5 == 1598968902) {
            parcel2.writeString(str);
            return true;
        }
        final n nVar = this.f16643g;
        Handler handler = this.f16642f;
        if (i5 == 2) {
            z5 = parcel.readInt() != 0;
            final Bundle bundle = (Bundle) (parcel.readInt() != 0 ? Bundle.CREATOR.createFromParcel(parcel) : null);
            final int i10 = 1;
            handler.post(new Runnable() { // from class: q.l
                @Override // java.lang.Runnable
                public final void run() {
                    switch (i10) {
                        case 0:
                            nVar.onSessionEnded(z5, bundle);
                            break;
                        default:
                            nVar.onVerticalScrollEvent(z5, bundle);
                            break;
                    }
                }
            });
            return true;
        }
        if (i5 == 3) {
            handler.post(new bb.a(nVar, parcel.readInt(), (Bundle) (parcel.readInt() != 0 ? Bundle.CREATOR.createFromParcel(parcel) : null), 11));
            return true;
        }
        if (i5 != 4) {
            return super.onTransact(i5, parcel, parcel2, i6);
        }
        z5 = parcel.readInt() != 0;
        final Bundle bundle2 = (Bundle) (parcel.readInt() != 0 ? Bundle.CREATOR.createFromParcel(parcel) : null);
        final int i11 = 0;
        handler.post(new Runnable() { // from class: q.l
            @Override // java.lang.Runnable
            public final void run() {
                switch (i11) {
                    case 0:
                        nVar.onSessionEnded(z5, bundle2);
                        break;
                    default:
                        nVar.onVerticalScrollEvent(z5, bundle2);
                        break;
                }
            }
        });
        return true;
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        return this;
    }
}
