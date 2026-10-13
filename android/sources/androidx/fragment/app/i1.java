package androidx.fragment.app;

import android.os.Parcel;
import android.os.Parcelable;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes.dex */
public final class i1 implements Parcelable {
    public static final Parcelable.Creator<i1> CREATOR = new android.support.v4.media.a(10);
    public final boolean E;
    public final boolean F;
    public final boolean G;
    public final boolean H;
    public final int I;
    public final String J;
    public final int K;
    public final boolean L;

    /* renamed from: d, reason: collision with root package name */
    public final String f2024d;

    /* renamed from: e, reason: collision with root package name */
    public final String f2025e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f2026i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f2027v;

    /* renamed from: w, reason: collision with root package name */
    public final int f2028w;

    /* renamed from: x, reason: collision with root package name */
    public final int f2029x;

    /* renamed from: y, reason: collision with root package name */
    public final String f2030y;

    public i1(Fragment fragment) {
        this.f2024d = fragment.getClass().getName();
        this.f2025e = fragment.mWho;
        this.f2026i = fragment.mFromLayout;
        this.f2027v = fragment.mInDynamicContainer;
        this.f2028w = fragment.mFragmentId;
        this.f2029x = fragment.mContainerId;
        this.f2030y = fragment.mTag;
        this.E = fragment.mRetainInstance;
        this.F = fragment.mRemoving;
        this.G = fragment.mDetached;
        this.H = fragment.mHidden;
        this.I = fragment.mMaxState.ordinal();
        this.J = fragment.mTargetWho;
        this.K = fragment.mTargetRequestCode;
        this.L = fragment.mUserVisibleHint;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        sb2.append("FragmentState{");
        sb2.append(this.f2024d);
        sb2.append(" (");
        sb2.append(this.f2025e);
        sb2.append(")}:");
        if (this.f2026i) {
            sb2.append(" fromLayout");
        }
        if (this.f2027v) {
            sb2.append(" dynamicContainer");
        }
        int i5 = this.f2029x;
        if (i5 != 0) {
            sb2.append(" id=0x");
            sb2.append(Integer.toHexString(i5));
        }
        String str = this.f2030y;
        if (str != null && !str.isEmpty()) {
            sb2.append(" tag=");
            sb2.append(str);
        }
        if (this.E) {
            sb2.append(" retainInstance");
        }
        if (this.F) {
            sb2.append(" removing");
        }
        if (this.G) {
            sb2.append(" detached");
        }
        if (this.H) {
            sb2.append(" hidden");
        }
        String str2 = this.J;
        if (str2 != null) {
            sb2.append(" targetWho=");
            sb2.append(str2);
            sb2.append(" targetRequestCode=");
            sb2.append(this.K);
        }
        if (this.L) {
            sb2.append(" userVisibleHint");
        }
        return sb2.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f2024d);
        parcel.writeString(this.f2025e);
        parcel.writeInt(this.f2026i ? 1 : 0);
        parcel.writeInt(this.f2027v ? 1 : 0);
        parcel.writeInt(this.f2028w);
        parcel.writeInt(this.f2029x);
        parcel.writeString(this.f2030y);
        parcel.writeInt(this.E ? 1 : 0);
        parcel.writeInt(this.F ? 1 : 0);
        parcel.writeInt(this.G ? 1 : 0);
        parcel.writeInt(this.H ? 1 : 0);
        parcel.writeInt(this.I);
        parcel.writeString(this.J);
        parcel.writeInt(this.K);
        parcel.writeInt(this.L ? 1 : 0);
    }

    public i1(Parcel parcel) {
        this.f2024d = parcel.readString();
        this.f2025e = parcel.readString();
        this.f2026i = parcel.readInt() != 0;
        this.f2027v = parcel.readInt() != 0;
        this.f2028w = parcel.readInt();
        this.f2029x = parcel.readInt();
        this.f2030y = parcel.readString();
        this.E = parcel.readInt() != 0;
        this.F = parcel.readInt() != 0;
        this.G = parcel.readInt() != 0;
        this.H = parcel.readInt() != 0;
        this.I = parcel.readInt();
        this.J = parcel.readString();
        this.K = parcel.readInt();
        this.L = parcel.readInt() != 0;
    }
}
