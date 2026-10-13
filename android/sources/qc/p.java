package qc;

import com.google.android.exoplayer2.metadata.Metadata;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ke.d0;

/* loaded from: classes3.dex */
public final class p {

    /* renamed from: c, reason: collision with root package name */
    public static final Pattern f16792c = Pattern.compile("^ [0-9a-fA-F]{8} ([0-9a-fA-F]{8}) ([0-9a-fA-F]{8})");
    public int a = -1;

    /* renamed from: b, reason: collision with root package name */
    public int f16793b = -1;

    public final boolean a(String str) {
        Matcher matcher = f16792c.matcher(str);
        if (!matcher.find()) {
            return false;
        }
        try {
            String group = matcher.group(1);
            int i5 = d0.a;
            int parseInt = Integer.parseInt(group, 16);
            int parseInt2 = Integer.parseInt(matcher.group(2), 16);
            if (parseInt <= 0 && parseInt2 <= 0) {
                return false;
            }
            this.a = parseInt;
            this.f16793b = parseInt2;
            return true;
        } catch (NumberFormatException unused) {
            return false;
        }
    }

    public final void b(Metadata metadata) {
        int i5 = 0;
        while (true) {
            dd.b[] bVarArr = metadata.f5427d;
            if (i5 >= bVarArr.length) {
                return;
            }
            dd.b bVar = bVarArr[i5];
            if (bVar instanceof id.e) {
                id.e eVar = (id.e) bVar;
                if ("iTunSMPB".equals(eVar.f10627i) && a(eVar.f10628v)) {
                    return;
                }
            } else if (bVar instanceof id.k) {
                id.k kVar = (id.k) bVar;
                if ("com.apple.iTunes".equals(kVar.f10637e) && "iTunSMPB".equals(kVar.f10638i) && a(kVar.f10639v)) {
                    return;
                }
            } else {
                continue;
            }
            i5++;
        }
    }
}
