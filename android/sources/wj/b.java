package wj;

/* loaded from: classes3.dex */
public class b {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f19844b;

    public b(int i5, int i6) {
        this.a = i5;
        this.f19844b = i6;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return this.a == bVar.a && this.f19844b == bVar.f19844b;
    }

    public final int hashCode() {
        return this.a ^ this.f19844b;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.a);
        sb2.append("(");
        return com.discord.chat.bridge.botuikit.a.i(sb2, this.f19844b, ')');
    }
}
