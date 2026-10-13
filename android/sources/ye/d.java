package ye;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import com.facebook.react.devsupport.StackTraceHelper;
import e4.r;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class d extends cf.a {

    @NonNull
    public static final Parcelable.Creator<d> CREATOR = new sf.c(23);

    /* renamed from: d, reason: collision with root package name */
    public final String f20913d;

    /* renamed from: e, reason: collision with root package name */
    public final int f20914e;

    /* renamed from: i, reason: collision with root package name */
    public final long f20915i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f20916v;

    public d(long j, String str, boolean z5, int i5) {
        this.f20913d = str;
        this.f20914e = i5;
        this.f20915i = j;
        this.f20916v = z5;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof d) {
            d dVar = (d) obj;
            if (t.j(this.f20913d, dVar.f20913d) && h() == dVar.h() && this.f20916v == dVar.f20916v) {
                return true;
            }
        }
        return false;
    }

    public final long h() {
        long j = this.f20915i;
        return j == -1 ? this.f20914e : j;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f20913d, Long.valueOf(h()), Boolean.valueOf(this.f20916v)});
    }

    public final String toString() {
        r rVar = new r(this);
        rVar.e(this.f20913d, StackTraceHelper.NAME_KEY);
        rVar.e(Long.valueOf(h()), "version");
        rVar.e(Boolean.valueOf(this.f20916v), "is_fully_rolled_out");
        return rVar.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.D(this.f20913d, parcel, 1);
        ys.l.H(parcel, 2, 4);
        parcel.writeInt(this.f20914e);
        long h6 = h();
        ys.l.H(parcel, 3, 8);
        parcel.writeLong(h6);
        ys.l.H(parcel, 4, 4);
        parcel.writeInt(this.f20916v ? 1 : 0);
        ys.l.J(I, parcel);
    }

    public d(String str, long j) {
        this(j, str, false, -1);
    }
}
