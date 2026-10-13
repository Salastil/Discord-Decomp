package ls;

import java.util.Locale;

/* loaded from: classes3.dex */
public final class b0 implements a0 {
    @Override // ls.a0
    public final e0 a(Locale locale) {
        boolean equals = locale.getLanguage().equals("en");
        int b10 = f0.e.b(1);
        if (b10 == 0) {
            return equals ? e0.a : e0.f14228b;
        }
        if (b10 == 1) {
            return equals ? e0.f14229c : e0.f14230d;
        }
        throw new UnsupportedOperationException("CARDINALS");
    }
}
