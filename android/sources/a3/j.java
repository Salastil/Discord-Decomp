package a3;

import android.os.BadParcelableException;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.RemoteException;
import android.util.Log;
import androidx.room.MultiInstanceInvalidationService;
import com.google.android.gms.common.api.Status;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class j extends Binder implements IInterface {

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ int f71f = 0;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ Object f72g;

    public j(jg.g gVar) {
        this.f72g = gVar;
        attachInterface(this, "com.google.android.gms.auth.api.phone.internal.ISmsRetrieverResultCallback");
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        int i5 = this.f71f;
        return this;
    }

    /* JADX WARN: Code restructure failed: missing block: B:5:0x0011, code lost:
    
        if (super.onTransact(r8, r9, r10, r11) != false) goto L7;
     */
    @Override // android.os.Binder
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onTransact(int i5, Parcel parcel, Parcel parcel2, int i6) {
        d callback = null;
        int i10 = 0;
        switch (this.f71f) {
            case 0:
                if (i5 >= 1 && i5 <= 16777215) {
                    parcel.enforceInterface("androidx.room.IMultiInstanceInvalidationService");
                }
                if (i5 == 1598968902) {
                    parcel2.writeString("androidx.room.IMultiInstanceInvalidationService");
                    return true;
                }
                if (i5 == 1) {
                    IBinder readStrongBinder = parcel.readStrongBinder();
                    if (readStrongBinder != null) {
                        IInterface queryLocalInterface = readStrongBinder.queryLocalInterface("androidx.room.IMultiInstanceInvalidationCallback");
                        if (queryLocalInterface == null || !(queryLocalInterface instanceof d)) {
                            callback = new d();
                            callback.f55f = readStrongBinder;
                        } else {
                            callback = (d) queryLocalInterface;
                        }
                    }
                    String readString = parcel.readString();
                    Intrinsics.checkNotNullParameter(callback, "callback");
                    if (readString != null) {
                        MultiInstanceInvalidationService multiInstanceInvalidationService = (MultiInstanceInvalidationService) this.f72g;
                        synchronized (multiInstanceInvalidationService.f2493i) {
                            try {
                                int i11 = multiInstanceInvalidationService.f2491d + 1;
                                multiInstanceInvalidationService.f2491d = i11;
                                if (multiInstanceInvalidationService.f2493i.register(callback, Integer.valueOf(i11))) {
                                    multiInstanceInvalidationService.f2492e.put(Integer.valueOf(i11), readString);
                                    i10 = i11;
                                } else {
                                    multiInstanceInvalidationService.f2491d--;
                                }
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        }
                    }
                    parcel2.writeNoException();
                    parcel2.writeInt(i10);
                    return true;
                }
                if (i5 == 2) {
                    IBinder readStrongBinder2 = parcel.readStrongBinder();
                    if (readStrongBinder2 != null) {
                        IInterface queryLocalInterface2 = readStrongBinder2.queryLocalInterface("androidx.room.IMultiInstanceInvalidationCallback");
                        if (queryLocalInterface2 == null || !(queryLocalInterface2 instanceof d)) {
                            callback = new d();
                            callback.f55f = readStrongBinder2;
                        } else {
                            callback = (d) queryLocalInterface2;
                        }
                    }
                    int readInt = parcel.readInt();
                    Intrinsics.checkNotNullParameter(callback, "callback");
                    MultiInstanceInvalidationService multiInstanceInvalidationService2 = (MultiInstanceInvalidationService) this.f72g;
                    synchronized (multiInstanceInvalidationService2.f2493i) {
                        multiInstanceInvalidationService2.f2493i.unregister(callback);
                    }
                    parcel2.writeNoException();
                    return true;
                }
                if (i5 != 3) {
                    return super.onTransact(i5, parcel, parcel2, i6);
                }
                int readInt2 = parcel.readInt();
                String[] tables = parcel.createStringArray();
                Intrinsics.checkNotNullParameter(tables, "tables");
                MultiInstanceInvalidationService multiInstanceInvalidationService3 = (MultiInstanceInvalidationService) this.f72g;
                synchronized (multiInstanceInvalidationService3.f2493i) {
                    String str = (String) multiInstanceInvalidationService3.f2492e.get(Integer.valueOf(readInt2));
                    if (str == null) {
                        Log.w("ROOM", "Remote invalidation client ID not registered");
                        return true;
                    }
                    int beginBroadcast = multiInstanceInvalidationService3.f2493i.beginBroadcast();
                    while (i10 < beginBroadcast) {
                        try {
                            Object broadcastCookie = multiInstanceInvalidationService3.f2493i.getBroadcastCookie(i10);
                            Intrinsics.checkNotNull(broadcastCookie, "null cannot be cast to non-null type kotlin.Int");
                            Integer num = (Integer) broadcastCookie;
                            int intValue = num.intValue();
                            String str2 = (String) multiInstanceInvalidationService3.f2492e.get(num);
                            if (readInt2 != intValue && Intrinsics.areEqual(str, str2)) {
                                try {
                                    ((d) multiInstanceInvalidationService3.f2493i.getBroadcastItem(i10)).b(tables);
                                } catch (RemoteException e9) {
                                    Log.w("ROOM", "Error invoking a remote callback", e9);
                                }
                            }
                            i10++;
                        } catch (Throwable th3) {
                            multiInstanceInvalidationService3.f2493i.finishBroadcast();
                            throw th3;
                        }
                    }
                    multiInstanceInvalidationService3.f2493i.finishBroadcast();
                    Unit unit = Unit.a;
                    return true;
                }
            default:
                if (i5 > 16777215) {
                    break;
                } else {
                    parcel.enforceInterface(getInterfaceDescriptor());
                }
                if (i5 != 1) {
                    return false;
                }
                Parcelable.Creator<Status> creator = Status.CREATOR;
                int i12 = wf.c.a;
                Status createFromParcel = parcel.readInt() == 0 ? null : creator.createFromParcel(parcel);
                int dataAvail = parcel.dataAvail();
                if (dataAvail > 0) {
                    throw new BadParcelableException(k0.d.i(dataAvail, "Parcel data not fully consumed, unread size: "));
                }
                ks.n.x(createFromParcel, null, (jg.g) this.f72g);
                return true;
        }
    }

    public j(MultiInstanceInvalidationService multiInstanceInvalidationService) {
        this.f72g = multiInstanceInvalidationService;
        attachInterface(this, "androidx.room.IMultiInstanceInvalidationService");
    }
}
