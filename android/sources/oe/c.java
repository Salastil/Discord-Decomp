package oe;

/* loaded from: classes3.dex */
public final class c implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public int f15837d;

    /* renamed from: e, reason: collision with root package name */
    public int f15838e;

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        c cVar = (c) obj;
        int i5 = this.f15838e;
        int i6 = cVar.f15838e;
        return i5 != i6 ? i5 - i6 : this.f15837d - cVar.f15837d;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Order{order=");
        sb2.append(this.f15838e);
        sb2.append(", index=");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f15837d, '}');
    }
}
