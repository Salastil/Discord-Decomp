package gd;

import a3.e;
import android.os.Parcel;
import android.os.Parcelable;
import hc.u0;
import ke.d0;

/* loaded from: classes3.dex */
public class c implements dd.b {
    public static final Parcelable.Creator<c> CREATOR = new a(1);

    /* renamed from: d, reason: collision with root package name */
    public final String f9154d;

    /* renamed from: e, reason: collision with root package name */
    public final String f9155e;

    public c(String str, String str2) {
        this.f9154d = str;
        this.f9155e = str2;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            c cVar = (c) obj;
            if (this.f9154d.equals(cVar.f9154d) && this.f9155e.equals(cVar.f9155e)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.f9155e.hashCode() + e.d(527, 31, this.f9154d);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override // dd.b
    public final void o(u0 u0Var) {
        String str = this.f9154d;
        str.getClass();
        char c6 = 65535;
        switch (str.hashCode()) {
            case 62359119:
                if (str.equals("ALBUM")) {
                    c6 = 0;
                    break;
                }
                break;
            case 79833656:
                if (str.equals("TITLE")) {
                    c6 = 1;
                    break;
                }
                break;
            case 428414940:
                if (str.equals("DESCRIPTION")) {
                    c6 = 2;
                    break;
                }
                break;
            case 1746739798:
                if (str.equals("ALBUMARTIST")) {
                    c6 = 3;
                    break;
                }
                break;
            case 1939198791:
                if (str.equals("ARTIST")) {
                    c6 = 4;
                    break;
                }
                break;
        }
        String str2 = this.f9155e;
        switch (c6) {
            case 0:
                u0Var.f9895c = str2;
                break;
            case 1:
                u0Var.a = str2;
                break;
            case 2:
                u0Var.f9899g = str2;
                break;
            case 3:
                u0Var.f9896d = str2;
                break;
            case 4:
                u0Var.f9894b = str2;
                break;
        }
    }

    public final String toString() {
        return "VC: " + this.f9154d + "=" + this.f9155e;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f9154d);
        parcel.writeString(this.f9155e);
    }

    public c(Parcel parcel) {
        String readString = parcel.readString();
        int i5 = d0.a;
        this.f9154d = readString;
        this.f9155e = parcel.readString();
    }
}
