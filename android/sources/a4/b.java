package a4;

/* loaded from: classes.dex */
public final class b extends c {
    public final int a;

    public b(int i5) {
        this.a = i5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof b) && this.a == ((b) obj).a;
    }

    public final int hashCode() {
        return Integer.hashCode(this.a);
    }

    public final String toString() {
        return com.discord.chat.bridge.botuikit.a.i(new StringBuilder("ConstraintsNotMet(reason="), this.a, ')');
    }
}
