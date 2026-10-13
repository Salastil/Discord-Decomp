package hk;

import android.text.Spanned;
import android.text.TextUtils;
import android.text.method.NumberKeyListener;
import com.henninghall.date_picker.pickers.AndroidNative;

/* loaded from: classes3.dex */
public final class c extends NumberKeyListener {
    public final /* synthetic */ AndroidNative a;

    public c(AndroidNative androidNative) {
        this.a = androidNative;
    }

    @Override // android.text.method.NumberKeyListener, android.text.InputFilter
    public final CharSequence filter(CharSequence charSequence, int i5, int i6, Spanned spanned, int i10, int i11) {
        AndroidNative androidNative = this.a;
        g gVar = androidNative.f10048c0;
        if (gVar != null && gVar.f10043v) {
            gVar.f10040d.removeCallbacks(gVar);
            gVar.f10043v = false;
        }
        if (androidNative.H == null) {
            CharSequence filter = super.filter(charSequence, i5, i6, spanned, i10, i11);
            if (filter == null) {
                filter = charSequence.subSequence(i5, i6);
            }
            String str = String.valueOf(spanned.subSequence(0, i10)) + ((Object) filter) + ((Object) spanned.subSequence(i11, spanned.length()));
            if ("".equals(str)) {
                return str;
            }
            if (androidNative.e(str) <= androidNative.J && str.length() <= String.valueOf(androidNative.J).length()) {
                return filter;
            }
        } else {
            String valueOf = String.valueOf(charSequence.subSequence(i5, i6));
            if (!TextUtils.isEmpty(valueOf)) {
                String str2 = String.valueOf(spanned.subSequence(0, i10)) + ((Object) valueOf) + ((Object) spanned.subSequence(i11, spanned.length()));
                String lowerCase = String.valueOf(str2).toLowerCase();
                for (String str3 : androidNative.H) {
                    if (str3.toLowerCase().startsWith(lowerCase)) {
                        int length = str2.length();
                        int length2 = str3.length();
                        if (androidNative.f10048c0 == null) {
                            androidNative.f10048c0 = new g(androidNative.f10051e);
                        }
                        g gVar2 = androidNative.f10048c0;
                        gVar2.f10041e = length;
                        gVar2.f10042i = length2;
                        if (!gVar2.f10043v) {
                            gVar2.f10040d.post(gVar2);
                            gVar2.f10043v = true;
                        }
                        return str3.subSequence(i10, str3.length());
                    }
                }
            }
        }
        return "";
    }

    @Override // android.text.method.NumberKeyListener
    public final char[] getAcceptedChars() {
        return i.F0;
    }

    @Override // android.text.method.KeyListener
    public final int getInputType() {
        return 1;
    }
}
