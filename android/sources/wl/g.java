package wl;

/* loaded from: classes3.dex */
public final class g {
    public boolean a;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof g) && this.a == ((g) obj).a;
    }

    public final int hashCode() {
        return Boolean.hashCode(this.a) + com.discord.chat.bridge.botuikit.a.u(1, com.discord.chat.bridge.botuikit.a.u(8, Integer.hashCode(519) * 31, 31), 31);
    }

    public final String toString() {
        return "KeyboardAnimationCallbackConfig(persistentInsetTypes=519, deferredInsetTypes=8, dispatchMode=1, hasTranslucentNavigationBar=" + this.a + ")";
    }
}
