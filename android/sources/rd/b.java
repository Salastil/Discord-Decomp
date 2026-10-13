package rd;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f17211b;

    /* renamed from: c, reason: collision with root package name */
    public final int f17212c;

    /* renamed from: d, reason: collision with root package name */
    public final int f17213d;

    public b(String str, String str2, int i5, int i6) {
        this.a = str;
        this.f17211b = str2;
        this.f17212c = i5;
        this.f17213d = i6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return this.f17212c == bVar.f17212c && this.f17213d == bVar.f17213d && w3.q.j(this.a, bVar.a) && w3.q.j(this.f17211b, bVar.f17211b);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.a, this.f17211b, Integer.valueOf(this.f17212c), Integer.valueOf(this.f17213d)});
    }
}
