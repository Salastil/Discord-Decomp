package androidx.appcompat.widget;

import android.os.Parcel;
import android.os.Parcelable;

/* loaded from: classes.dex */
public final class c3 implements Parcelable.ClassLoaderCreator {
    public final /* synthetic */ int a;

    public /* synthetic */ c3(int i5) {
        this.a = i5;
    }

    @Override // android.os.Parcelable.ClassLoaderCreator
    public final Object createFromParcel(Parcel parcel, ClassLoader classLoader) {
        switch (this.a) {
            case 0:
                return new d3(parcel, classLoader);
            case 1:
                return new u3(parcel, classLoader);
            case 2:
                return new androidx.drawerlayout.widget.e(parcel, classLoader);
            case 3:
                return new ch.b(parcel, classLoader);
            case 4:
                return new ch.g(parcel, classLoader);
            case 5:
                if (parcel.readParcelable(classLoader) == null) {
                    return d2.b.f7398e;
                }
                throw new IllegalStateException("superState must be null");
            case 6:
                return new fh.o(parcel, classLoader);
            case 7:
                return new mh.d(parcel, classLoader);
            case 8:
                return new ng.d(parcel, classLoader);
            case 9:
                return new oh.a0(parcel, classLoader);
            case 10:
                return new sg.c(parcel, classLoader);
            case 11:
                return new tg.b(parcel, classLoader);
            default:
                return new v0.e(parcel, classLoader);
        }
    }

    @Override // android.os.Parcelable.Creator
    public final Object[] newArray(int i5) {
        switch (this.a) {
            case 0:
                return new d3[i5];
            case 1:
                return new u3[i5];
            case 2:
                return new androidx.drawerlayout.widget.e[i5];
            case 3:
                return new ch.b[i5];
            case 4:
                return new ch.g[i5];
            case 5:
                return new d2.b[i5];
            case 6:
                return new fh.o[i5];
            case 7:
                return new mh.d[i5];
            case 8:
                return new ng.d[i5];
            case 9:
                return new oh.a0[i5];
            case 10:
                return new sg.c[i5];
            case 11:
                return new tg.b[i5];
            default:
                return new v0.e[i5];
        }
    }

    @Override // android.os.Parcelable.Creator
    public final Object createFromParcel(Parcel parcel) {
        switch (this.a) {
            case 0:
                return new d3(parcel, null);
            case 1:
                return new u3(parcel, null);
            case 2:
                return new androidx.drawerlayout.widget.e(parcel, null);
            case 3:
                return new ch.b(parcel, null);
            case 4:
                return new ch.g(parcel, null);
            case 5:
                if (parcel.readParcelable(null) == null) {
                    return d2.b.f7398e;
                }
                throw new IllegalStateException("superState must be null");
            case 6:
                return new fh.o(parcel, null);
            case 7:
                return new mh.d(parcel, null);
            case 8:
                return new ng.d(parcel, null);
            case 9:
                return new oh.a0(parcel, null);
            case 10:
                return new sg.c(parcel, null);
            case 11:
                return new tg.b(parcel, null);
            default:
                return new v0.e(parcel, null);
        }
    }
}
