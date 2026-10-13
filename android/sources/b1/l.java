package b1;

import android.graphics.Typeface;
import android.graphics.fonts.Font;
import android.net.Uri;
import android.text.TextUtils;
import android.util.Log;
import java.io.IOException;
import java.util.Objects;

/* loaded from: classes.dex */
public final class l extends k {
    @Override // b1.k
    public final Font R(i1.g gVar) {
        Font d6;
        Uri uri = gVar.a;
        boolean equals = Objects.equals(uri.getScheme(), "systemfont");
        String str = gVar.f10456e;
        String authority = equals ? uri.getAuthority() : null;
        if (authority != null) {
            Typeface create = Typeface.create(authority, 0);
            Typeface create2 = Typeface.create(Typeface.DEFAULT, 0);
            if (create == null || create.equals(create2)) {
                create = null;
            }
            if (create != null && (d6 = f.d(create)) != null) {
                if (TextUtils.isEmpty(str)) {
                    return d6;
                }
                try {
                    return new Font.Builder(d6).setFontVariationSettings(str).build();
                } catch (IOException unused) {
                    Log.e("TypefaceCompatApi31Impl", "Failed to clone Font instance. Fall back to provider font.");
                    return null;
                }
            }
        }
        return null;
    }
}
