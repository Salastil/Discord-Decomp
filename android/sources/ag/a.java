package ag;

import ai.i;
import ai.j;
import android.app.PendingIntent;
import android.os.BadParcelableException;
import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.internal.play_billing.f;
import jg.g;
import k0.d;
import kotlin.jvm.internal.Intrinsics;
import ks.n;
import sf.m;
import sf.s;

/* loaded from: classes3.dex */
public abstract class a extends Binder implements IInterface {

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ int f611f;

    public /* synthetic */ a(int i5) {
        this.f611f = i5;
    }

    public static void u(Parcel parcel) {
        int i5 = cg.a.a;
        int dataAvail = parcel.dataAvail();
        if (dataAvail <= 0) {
            return;
        }
        StringBuilder sb2 = new StringBuilder(String.valueOf(dataAvail).length() + 45);
        sb2.append("Parcel data not fully consumed, unread size: ");
        sb2.append(dataAvail);
        throw new BadParcelableException(sb2.toString());
    }

    public static void v(Parcel parcel) {
        int i5 = f.a;
        int dataAvail = parcel.dataAvail();
        if (dataAvail > 0) {
            throw new BadParcelableException(d.i(dataAvail, "Parcel data not fully consumed, unread size: "));
        }
    }

    @Override // android.os.IInterface
    public final IBinder asBinder() {
        int i5 = this.f611f;
        return this;
    }

    /* JADX WARN: Code restructure failed: missing block: B:136:0x02fe, code lost:
    
        if (super.onTransact(r6, r7, r8, r9) != false) goto L132;
     */
    /* JADX WARN: Code restructure failed: missing block: B:90:0x0258, code lost:
    
        if (super.onTransact(r6, r7, r8, r9) != false) goto L91;
     */
    /* JADX WARN: Multi-variable type inference failed */
    @Override // android.os.Binder
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean onTransact(int i5, Parcel parcel, Parcel parcel2, int i6) {
        boolean z5;
        boolean z6 = false;
        Object[] objArr = 0;
        switch (this.f611f) {
            case 0:
                if (i5 > 16777215) {
                    break;
                } else {
                    parcel.enforceInterface(getInterfaceDescriptor());
                }
                lf.f fVar = (lf.f) this;
                if (i5 != 1) {
                    return false;
                }
                Parcelable.Creator<Status> creator = Status.CREATOR;
                int i10 = b.a;
                Status createFromParcel = parcel.readInt() == 0 ? null : creator.createFromParcel(parcel);
                kf.a createFromParcel2 = parcel.readInt() == 0 ? null : kf.a.CREATOR.createFromParcel(parcel);
                int dataAvail = parcel.dataAvail();
                if (dataAvail > 0) {
                    throw new BadParcelableException(d.i(dataAvail, "Parcel data not fully consumed, unread size: "));
                }
                n.x(createFromParcel, createFromParcel2 != null ? Integer.valueOf(createFromParcel2.f13367d) : null, fVar.f13951g);
                return true;
            case 1:
                if (i5 > 16777215) {
                    break;
                } else {
                    parcel.enforceInterface(getInterfaceDescriptor());
                }
                zh.d dVar = (zh.d) this;
                if (i5 != 2) {
                    return false;
                }
                Parcelable.Creator creator2 = Bundle.CREATOR;
                int i11 = ai.a.a;
                Bundle bundle = (Bundle) (parcel.readInt() != 0 ? (Parcelable) creator2.createFromParcel(parcel) : null);
                int dataAvail2 = parcel.dataAvail();
                if (dataAvail2 > 0) {
                    throw new BadParcelableException(d.i(dataAvail2, "Parcel data not fully consumed, unread size: "));
                }
                j jVar = dVar.f21246i.a;
                if (jVar != null) {
                    g gVar = dVar.f21245h;
                    synchronized (jVar.f628f) {
                        jVar.f627e.remove(gVar);
                    }
                    synchronized (jVar.f628f) {
                        try {
                            if (jVar.k.get() <= 0 || jVar.k.decrementAndGet() <= 0) {
                                jVar.a().post(new i(objArr == true ? 1 : 0, jVar));
                            } else {
                                jVar.f624b.b("Leaving the connection open for other ongoing calls.", new Object[0]);
                            }
                        } finally {
                        }
                    }
                }
                dVar.f21244g.b("onGetLaunchReviewFlowInfo", new Object[0]);
                dVar.f21245h.d(new zh.c((PendingIntent) bundle.get("confirmation_intent"), bundle.getBoolean("is_review_no_op")));
                return true;
            case 2:
                if (i5 > 16777215) {
                    z5 = super.onTransact(i5, parcel, parcel2, i6);
                } else {
                    parcel.enforceInterface(getInterfaceDescriptor());
                    z5 = false;
                }
                if (!z5) {
                    tf.f fVar2 = (tf.f) this;
                    switch (i5) {
                        case 1:
                            Status status = (Status) cg.a.a(parcel, Status.CREATOR);
                            m mVar = (m) cg.a.a(parcel, m.CREATOR);
                            u(parcel);
                            fVar2.q(status, mVar);
                            break;
                        case 2:
                            Status status2 = (Status) cg.a.a(parcel, Status.CREATOR);
                            u(parcel);
                            Intrinsics.checkNotNullParameter(status2, "status");
                            throw new UnsupportedOperationException();
                        case 3:
                            Status status3 = (Status) cg.a.a(parcel, Status.CREATOR);
                            u(parcel);
                            Intrinsics.checkNotNullParameter(status3, "status");
                            throw new UnsupportedOperationException();
                        case 4:
                            Status status4 = (Status) cg.a.a(parcel, Status.CREATOR);
                            u(parcel);
                            Intrinsics.checkNotNullParameter(status4, "status");
                            throw new UnsupportedOperationException();
                        case 5:
                            Status status5 = (Status) cg.a.a(parcel, Status.CREATOR);
                            u(parcel);
                            Intrinsics.checkNotNullParameter(status5, "status");
                            throw new UnsupportedOperationException();
                        case 6:
                            Status status6 = (Status) cg.a.a(parcel, Status.CREATOR);
                            u(parcel);
                            Intrinsics.checkNotNullParameter(status6, "status");
                            throw new UnsupportedOperationException();
                        case 7:
                            Status status7 = (Status) cg.a.a(parcel, Status.CREATOR);
                            sf.f fVar3 = (sf.f) cg.a.a(parcel, sf.f.CREATOR);
                            u(parcel);
                            fVar2.m(status7, fVar3);
                            break;
                        case 8:
                            Status status8 = (Status) cg.a.a(parcel, Status.CREATOR);
                            u(parcel);
                            Intrinsics.checkNotNullParameter(status8, "status");
                            throw new UnsupportedOperationException();
                        case 9:
                            Status status9 = (Status) cg.a.a(parcel, Status.CREATOR);
                            sf.b bVar = (sf.b) cg.a.a(parcel, sf.b.CREATOR);
                            u(parcel);
                            fVar2.l(status9, bVar);
                            break;
                        case 10:
                            Status status10 = (Status) cg.a.a(parcel, Status.CREATOR);
                            s sVar = (s) cg.a.a(parcel, s.CREATOR);
                            u(parcel);
                            fVar2.a(status10, sVar);
                            break;
                        case 11:
                            Status status11 = (Status) cg.a.a(parcel, Status.CREATOR);
                            u(parcel);
                            Intrinsics.checkNotNullParameter(status11, "status");
                            throw new UnsupportedOperationException();
                        case 12:
                            Status status12 = (Status) cg.a.a(parcel, Status.CREATOR);
                            u(parcel);
                            Intrinsics.checkNotNullParameter(status12, "status");
                            throw new UnsupportedOperationException();
                        case 13:
                            Status status13 = (Status) cg.a.a(parcel, Status.CREATOR);
                            u(parcel);
                            Intrinsics.checkNotNullParameter(status13, "status");
                            throw new UnsupportedOperationException();
                        case 14:
                            Status status14 = (Status) cg.a.a(parcel, Status.CREATOR);
                            u(parcel);
                            Intrinsics.checkNotNullParameter(status14, "status");
                            throw new UnsupportedOperationException();
                        case 15:
                            Status status15 = (Status) cg.a.a(parcel, Status.CREATOR);
                            u(parcel);
                            Intrinsics.checkNotNullParameter(status15, "status");
                            throw new UnsupportedOperationException();
                        default:
                            return false;
                    }
                }
                return true;
            case 3:
                if (i5 > 16777215) {
                    z6 = super.onTransact(i5, parcel, parcel2, i6);
                } else {
                    parcel.enforceInterface(getInterfaceDescriptor());
                }
                if (z6) {
                    return true;
                }
                return t(i5, parcel, parcel2);
            case 4:
                if (i5 <= 16777215) {
                    parcel.enforceInterface(getInterfaceDescriptor());
                } else if (super.onTransact(i5, parcel, parcel2, i6)) {
                    return true;
                }
                return s(i5, parcel);
            case 5:
                if (i5 <= 16777215) {
                    parcel.enforceInterface(getInterfaceDescriptor());
                } else if (super.onTransact(i5, parcel, parcel2, i6)) {
                    return true;
                }
                return r(i5, parcel);
            case 6:
                if (i5 <= 16777215) {
                    parcel.enforceInterface(getInterfaceDescriptor());
                } else if (super.onTransact(i5, parcel, parcel2, i6)) {
                    return true;
                }
                return r(i5, parcel);
            case 7:
                if (i5 <= 16777215) {
                    parcel.enforceInterface(getInterfaceDescriptor());
                } else if (super.onTransact(i5, parcel, parcel2, i6)) {
                    return true;
                }
                return x(i5, parcel, parcel2);
            case 8:
                if (i5 <= 16777215) {
                    parcel.enforceInterface(getInterfaceDescriptor());
                } else if (super.onTransact(i5, parcel, parcel2, i6)) {
                    return true;
                }
                return w(i5, parcel, parcel2);
            default:
                if (i5 <= 16777215) {
                    parcel.enforceInterface(getInterfaceDescriptor());
                } else if (super.onTransact(i5, parcel, parcel2, i6)) {
                    return true;
                }
                return y(i5, parcel, parcel2);
        }
    }

    public abstract boolean r(int i5, Parcel parcel);

    public abstract boolean s(int i5, Parcel parcel);

    public abstract boolean t(int i5, Parcel parcel, Parcel parcel2);

    public abstract boolean w(int i5, Parcel parcel, Parcel parcel2);

    public abstract boolean x(int i5, Parcel parcel, Parcel parcel2);

    public boolean y(int i5, Parcel parcel, Parcel parcel2) {
        return false;
    }

    public a(String str, int i5) {
        this.f611f = i5;
        switch (i5) {
            case 4:
                attachInterface(this, str);
                break;
            case 5:
                attachInterface(this, str);
                break;
            case 6:
                attachInterface(this, str);
                break;
            case 7:
                attachInterface(this, str);
                break;
            case 8:
                attachInterface(this, str);
                break;
            case 9:
                attachInterface(this, str);
                break;
            default:
                attachInterface(this, str);
                break;
        }
    }
}
