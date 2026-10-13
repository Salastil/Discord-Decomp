package i1;

import java.util.List;
import java.util.Objects;

/* loaded from: classes.dex */
public final class a {
    public String a;

    /* renamed from: b, reason: collision with root package name */
    public String f10435b;

    /* renamed from: c, reason: collision with root package name */
    public List f10436c;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return Objects.equals(this.a, aVar.a) && Objects.equals(this.f10435b, aVar.f10435b) && Objects.equals(this.f10436c, aVar.f10436c);
    }

    public final int hashCode() {
        return Objects.hash(this.a, this.f10435b, this.f10436c);
    }
}
