package ie;

import com.discord.key_commands.KeyCommandDescriptor;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class q {

    /* renamed from: c, reason: collision with root package name */
    public int f10723c;

    /* renamed from: d, reason: collision with root package name */
    public int f10724d;
    public final boolean a = true;

    /* renamed from: b, reason: collision with root package name */
    public final int f10722b = KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT;

    /* renamed from: e, reason: collision with root package name */
    public int f10725e = 0;

    /* renamed from: f, reason: collision with root package name */
    public a[] f10726f = new a[100];

    public final synchronized void a(int i5) {
        boolean z5 = i5 < this.f10723c;
        this.f10723c = i5;
        if (z5) {
            b();
        }
    }

    public final synchronized void b() {
        int max = Math.max(0, ke.d0.f(this.f10723c, this.f10722b) - this.f10724d);
        int i5 = this.f10725e;
        if (max >= i5) {
            return;
        }
        Arrays.fill(this.f10726f, max, i5, (Object) null);
        this.f10725e = max;
    }
}
