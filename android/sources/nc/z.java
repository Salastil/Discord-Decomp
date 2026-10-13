package nc;

import java.util.UUID;

/* loaded from: classes3.dex */
public final class z implements mc.b {

    /* renamed from: d, reason: collision with root package name */
    public static final boolean f15051d;
    public final UUID a;

    /* renamed from: b, reason: collision with root package name */
    public final byte[] f15052b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f15053c;

    static {
        boolean z5;
        if ("Amazon".equals(ke.d0.f13295c)) {
            String str = ke.d0.f13296d;
            if ("AFTM".equals(str) || "AFTB".equals(str)) {
                z5 = true;
                f15051d = z5;
            }
        }
        z5 = false;
        f15051d = z5;
    }

    public z(UUID uuid, byte[] bArr, boolean z5) {
        this.a = uuid;
        this.f15052b = bArr;
        this.f15053c = z5;
    }
}
