package f;

import com.discord.key_commands.KeyCommandDescriptor;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class e extends Lambda implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public static final e f8294d = new e(0);

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        wo.d.f19972d.getClass();
        return Integer.valueOf(wo.d.f19973e.d().nextInt(2147418112) + KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT);
    }
}
