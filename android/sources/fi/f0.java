package fi;

/* loaded from: classes3.dex */
public final class f0 {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f8658b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f8659c;

    public f0(Object obj, Object obj2, Object obj3) {
        this.a = obj;
        this.f8658b = obj2;
        this.f8659c = obj3;
    }

    public final IllegalArgumentException a() {
        Object obj = this.a;
        String valueOf = String.valueOf(obj);
        String valueOf2 = String.valueOf(this.f8658b);
        String valueOf3 = String.valueOf(obj);
        String valueOf4 = String.valueOf(this.f8659c);
        StringBuilder sb2 = new StringBuilder(valueOf4.length() + valueOf3.length() + valueOf2.length() + valueOf.length() + 39);
        sb2.append("Multiple entries with same key: ");
        sb2.append(valueOf);
        sb2.append("=");
        sb2.append(valueOf2);
        return new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.k(sb2, " and ", valueOf3, "=", valueOf4));
    }
}
