package o3;

import android.os.Parcel;
import android.util.SparseIntArray;
import s.e;

/* loaded from: classes.dex */
public final class b extends a {

    /* renamed from: d, reason: collision with root package name */
    public final SparseIntArray f15733d;

    /* renamed from: e, reason: collision with root package name */
    public final Parcel f15734e;

    /* renamed from: f, reason: collision with root package name */
    public final int f15735f;

    /* renamed from: g, reason: collision with root package name */
    public final int f15736g;

    /* renamed from: h, reason: collision with root package name */
    public final String f15737h;

    /* renamed from: i, reason: collision with root package name */
    public int f15738i;
    public int j;
    public int k;

    public b(Parcel parcel) {
        this(parcel, parcel.dataPosition(), parcel.dataSize(), "", new e(0), new e(0), new e(0));
    }

    @Override // o3.a
    public final b a() {
        Parcel parcel = this.f15734e;
        int dataPosition = parcel.dataPosition();
        int i5 = this.j;
        if (i5 == this.f15735f) {
            i5 = this.f15736g;
        }
        return new b(parcel, dataPosition, i5, com.discord.chat.bridge.botuikit.a.j(new StringBuilder(), this.f15737h, "  "), this.a, this.f15731b, this.f15732c);
    }

    @Override // o3.a
    public final boolean e(int i5) {
        while (this.j < this.f15736g) {
            int i6 = this.k;
            if (i6 == i5) {
                return true;
            }
            if (String.valueOf(i6).compareTo(String.valueOf(i5)) > 0) {
                return false;
            }
            int i10 = this.j;
            Parcel parcel = this.f15734e;
            parcel.setDataPosition(i10);
            int readInt = parcel.readInt();
            this.k = parcel.readInt();
            this.j += readInt;
        }
        return this.k == i5;
    }

    @Override // o3.a
    public final void i(int i5) {
        int i6 = this.f15738i;
        SparseIntArray sparseIntArray = this.f15733d;
        Parcel parcel = this.f15734e;
        if (i6 >= 0) {
            int i10 = sparseIntArray.get(i6);
            int dataPosition = parcel.dataPosition();
            parcel.setDataPosition(i10);
            parcel.writeInt(dataPosition - i10);
            parcel.setDataPosition(dataPosition);
        }
        this.f15738i = i5;
        sparseIntArray.put(i5, parcel.dataPosition());
        parcel.writeInt(0);
        parcel.writeInt(i5);
    }

    public b(Parcel parcel, int i5, int i6, String str, e eVar, e eVar2, e eVar3) {
        super(eVar, eVar2, eVar3);
        this.f15733d = new SparseIntArray();
        this.f15738i = -1;
        this.k = -1;
        this.f15734e = parcel;
        this.f15735f = i5;
        this.f15736g = i6;
        this.j = i5;
        this.f15737h = str;
    }
}
