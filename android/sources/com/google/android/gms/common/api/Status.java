package com.google.android.gms.common.api;

import android.app.PendingIntent;
import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import cf.a;
import com.google.android.gms.common.internal.ReflectedParcelable;
import e4.r;
import java.util.Arrays;
import ye.b;
import ys.l;
import ze.n;
import ze.q;

/* loaded from: classes3.dex */
public final class Status extends a implements n, ReflectedParcelable {

    /* renamed from: d, reason: collision with root package name */
    public final int f5657d;

    /* renamed from: e, reason: collision with root package name */
    public final String f5658e;

    /* renamed from: i, reason: collision with root package name */
    public final PendingIntent f5659i;

    /* renamed from: v, reason: collision with root package name */
    public final b f5660v;

    /* renamed from: w, reason: collision with root package name */
    public static final Status f5654w = new Status(0, null, null, null);

    /* renamed from: x, reason: collision with root package name */
    public static final Status f5655x = new Status(14, null, null, null);

    /* renamed from: y, reason: collision with root package name */
    public static final Status f5656y = new Status(8, null, null, null);
    public static final Status E = new Status(15, null, null, null);
    public static final Status F = new Status(16, null, null, null);

    @NonNull
    public static final Parcelable.Creator<Status> CREATOR = new q(3);

    public Status(int i5, String str, PendingIntent pendingIntent, b bVar) {
        this.f5657d = i5;
        this.f5658e = str;
        this.f5659i = pendingIntent;
        this.f5660v = bVar;
    }

    @Override // ze.n
    public final Status a() {
        return this;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof Status)) {
            return false;
        }
        Status status = (Status) obj;
        return this.f5657d == status.f5657d && t.j(this.f5658e, status.f5658e) && t.j(this.f5659i, status.f5659i) && t.j(this.f5660v, status.f5660v);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(this.f5657d), this.f5658e, this.f5659i, this.f5660v});
    }

    public final String toString() {
        r rVar = new r(this);
        String str = this.f5658e;
        if (str == null) {
            int i5 = this.f5657d;
            switch (i5) {
                case -1:
                    str = "SUCCESS_CACHE";
                    break;
                case 0:
                    str = "SUCCESS";
                    break;
                case 1:
                case 9:
                case 11:
                case 12:
                default:
                    StringBuilder sb2 = new StringBuilder(String.valueOf(i5).length() + 21);
                    sb2.append("unknown status code: ");
                    sb2.append(i5);
                    str = sb2.toString();
                    break;
                case 2:
                    str = "SERVICE_VERSION_UPDATE_REQUIRED";
                    break;
                case 3:
                    str = "SERVICE_DISABLED";
                    break;
                case 4:
                    str = "SIGN_IN_REQUIRED";
                    break;
                case 5:
                    str = "INVALID_ACCOUNT";
                    break;
                case 6:
                    str = "RESOLUTION_REQUIRED";
                    break;
                case 7:
                    str = "NETWORK_ERROR";
                    break;
                case 8:
                    str = "INTERNAL_ERROR";
                    break;
                case 10:
                    str = "DEVELOPER_ERROR";
                    break;
                case 13:
                    str = "ERROR";
                    break;
                case 14:
                    str = "INTERRUPTED";
                    break;
                case 15:
                    str = "TIMEOUT";
                    break;
                case 16:
                    str = "CANCELED";
                    break;
                case 17:
                    str = "API_NOT_CONNECTED";
                    break;
                case 18:
                    str = "DEAD_CLIENT";
                    break;
                case 19:
                    str = "REMOTE_EXCEPTION";
                    break;
                case 20:
                    str = "CONNECTION_SUSPENDED_DURING_CALL";
                    break;
                case 21:
                    str = "RECONNECTION_TIMED_OUT_DURING_UPDATE";
                    break;
                case 22:
                    str = "RECONNECTION_TIMED_OUT";
                    break;
            }
        }
        rVar.e(str, "statusCode");
        rVar.e(this.f5659i, "resolution");
        return rVar.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.H(parcel, 1, 4);
        parcel.writeInt(this.f5657d);
        l.D(this.f5658e, parcel, 2);
        l.C(parcel, 3, this.f5659i, i5);
        l.C(parcel, 4, this.f5660v, i5);
        l.J(I, parcel);
    }
}
