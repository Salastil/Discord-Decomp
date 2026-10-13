package mq;

import ip.a0;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;

/* loaded from: classes3.dex */
public final class e extends p {
    @Override // mq.g
    public final yq.y a(a0 module) {
        Intrinsics.checkNotNullParameter(module, "module");
        fp.i g6 = module.g();
        g6.getClass();
        c0 t5 = g6.t(fp.k.f8867y);
        Intrinsics.checkNotNullExpressionValue(t5, "getCharType(...)");
        return t5;
    }

    @Override // mq.g
    public final String toString() {
        String str;
        Object obj = this.a;
        Integer valueOf = Integer.valueOf(((Character) obj).charValue());
        char charValue = ((Character) obj).charValue();
        switch (charValue) {
            case '\b':
                str = "\\b";
                break;
            case '\t':
                str = "\\t";
                break;
            case '\n':
                str = "\\n";
                break;
            case 11:
            default:
                byte type = (byte) Character.getType(charValue);
                if (type != 0 && type != 13 && type != 14 && type != 15 && type != 16 && type != 18 && type != 19) {
                    str = String.valueOf(charValue);
                    break;
                } else {
                    str = "?";
                    break;
                }
            case '\f':
                str = "\\f";
                break;
            case '\r':
                str = "\\r";
                break;
        }
        String format = String.format("\\u%04X ('%s')", Arrays.copyOf(new Object[]{valueOf, str}, 2));
        Intrinsics.checkNotNullExpressionValue(format, "format(...)");
        return format;
    }
}
