package qo;

import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public class k {
    public static final c a(File file) {
        int length;
        List list;
        int I;
        Intrinsics.checkNotNullParameter(file, "<this>");
        String path = file.getPath();
        Intrinsics.checkNotNull(path);
        char c6 = File.separatorChar;
        int I2 = StringsKt.I(path, c6, 0, 4);
        if (I2 != 0) {
            length = (I2 <= 0 || path.charAt(I2 + (-1)) != ':') ? (I2 == -1 && StringsKt.G(path, ':')) ? path.length() : 0 : I2 + 1;
        } else if (path.length() <= 1 || path.charAt(1) != c6 || (I = StringsKt.I(path, c6, 2, 4)) < 0) {
            length = 1;
        } else {
            int I3 = StringsKt.I(path, c6, I + 1, 4);
            length = I3 >= 0 ? I3 + 1 : path.length();
        }
        String substring = path.substring(0, length);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        String substring2 = path.substring(length);
        Intrinsics.checkNotNullExpressionValue(substring2, "substring(...)");
        if (substring2.length() == 0) {
            list = m0.f13512d;
        } else {
            List S = StringsKt.S(substring2, new char[]{c6});
            ArrayList arrayList = new ArrayList(d0.l(S, 10));
            Iterator it = S.iterator();
            while (it.hasNext()) {
                arrayList.add(new File((String) it.next()));
            }
            list = arrayList;
        }
        return new c(new File(substring), list);
    }
}
