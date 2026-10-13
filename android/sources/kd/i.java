package kd;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class i extends b {
    public static final Parcelable.Creator<i> CREATOR = new gd.a(28);

    /* renamed from: d, reason: collision with root package name */
    public final List f13270d;

    public i(Parcel parcel) {
        int readInt = parcel.readInt();
        ArrayList arrayList = new ArrayList(readInt);
        for (int i5 = 0; i5 < readInt; i5++) {
            arrayList.add(new h(parcel));
        }
        this.f13270d = Collections.unmodifiableList(arrayList);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        List list = this.f13270d;
        int size = list.size();
        parcel.writeInt(size);
        for (int i6 = 0; i6 < size; i6++) {
            h hVar = (h) list.get(i6);
            parcel.writeLong(hVar.a);
            parcel.writeByte(hVar.f13262b ? (byte) 1 : (byte) 0);
            parcel.writeByte(hVar.f13263c ? (byte) 1 : (byte) 0);
            parcel.writeByte(hVar.f13264d ? (byte) 1 : (byte) 0);
            List list2 = hVar.f13266f;
            int size2 = list2.size();
            parcel.writeInt(size2);
            for (int i10 = 0; i10 < size2; i10++) {
                g gVar = (g) list2.get(i10);
                parcel.writeInt(gVar.a);
                parcel.writeLong(gVar.f13261b);
            }
            parcel.writeLong(hVar.f13265e);
            parcel.writeByte(hVar.f13267g ? (byte) 1 : (byte) 0);
            parcel.writeLong(hVar.f13268h);
            parcel.writeInt(hVar.f13269i);
            parcel.writeInt(hVar.j);
            parcel.writeInt(hVar.k);
        }
    }

    public i(ArrayList arrayList) {
        this.f13270d = Collections.unmodifiableList(arrayList);
    }
}
