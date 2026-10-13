package sd;

import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class w implements dd.b {
    public static final Parcelable.Creator<w> CREATOR = new u(0);

    /* renamed from: d, reason: collision with root package name */
    public final String f17946d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17947e;

    /* renamed from: i, reason: collision with root package name */
    public final List f17948i;

    public w(String str, String str2, List list) {
        this.f17946d = str;
        this.f17947e = str2;
        this.f17948i = Collections.unmodifiableList(new ArrayList(list));
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && w.class == obj.getClass()) {
            w wVar = (w) obj;
            if (TextUtils.equals(this.f17946d, wVar.f17946d) && TextUtils.equals(this.f17947e, wVar.f17947e) && this.f17948i.equals(wVar.f17948i)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.f17946d;
        int hashCode = (str != null ? str.hashCode() : 0) * 31;
        String str2 = this.f17947e;
        return this.f17948i.hashCode() + ((hashCode + (str2 != null ? str2.hashCode() : 0)) * 31);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("HlsTrackMetadataEntry");
        String str = this.f17946d;
        sb2.append(str != null ? com.discord.chat.bridge.botuikit.a.j(com.discord.chat.bridge.botuikit.a.m(" [", str, ", "), this.f17947e, "]") : "");
        return sb2.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f17946d);
        parcel.writeString(this.f17947e);
        List list = this.f17948i;
        int size = list.size();
        parcel.writeInt(size);
        for (int i6 = 0; i6 < size; i6++) {
            parcel.writeParcelable((Parcelable) list.get(i6), 0);
        }
    }

    public w(Parcel parcel) {
        this.f17946d = parcel.readString();
        this.f17947e = parcel.readString();
        int readInt = parcel.readInt();
        ArrayList arrayList = new ArrayList(readInt);
        for (int i5 = 0; i5 < readInt; i5++) {
            arrayList.add((v) parcel.readParcelable(v.class.getClassLoader()));
        }
        this.f17948i = Collections.unmodifiableList(arrayList);
    }
}
