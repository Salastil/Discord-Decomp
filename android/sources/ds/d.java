package ds;

import com.discord.key_commands.KeyCommandDescriptor;
import kotlin.Result;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public abstract class d {
    public static final int a;

    static {
        Object i5;
        try {
            fo.q qVar = Result.f13476e;
            String property = System.getProperty("kotlinx.serialization.json.pool.size");
            Intrinsics.checkNotNullExpressionValue(property, "getProperty(...)");
            i5 = StringsKt.toIntOrNull(property);
        } catch (Throwable th2) {
            fo.q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        if (i5 instanceof fo.r) {
            i5 = null;
        }
        Integer num = (Integer) i5;
        a = num != null ? num.intValue() : KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD;
    }
}
