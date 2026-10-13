package j1;

import a5.h0;
import android.text.SpannableStringBuilder;
import android.text.TextUtils;
import java.util.Locale;

/* loaded from: classes.dex */
public final class b {

    /* renamed from: b, reason: collision with root package name */
    public static final String f12377b;

    /* renamed from: c, reason: collision with root package name */
    public static final String f12378c;

    /* renamed from: d, reason: collision with root package name */
    public static final b f12379d;

    /* renamed from: e, reason: collision with root package name */
    public static final b f12380e;
    public final boolean a;

    static {
        h0 h0Var = d.f12382c;
        f12377b = Character.toString((char) 8206);
        f12378c = Character.toString((char) 8207);
        f12379d = new b(false);
        f12380e = new b(true);
    }

    public b(boolean z5) {
        h0 h0Var = d.a;
        this.a = z5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:33:0x0085, code lost:
    
        return 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x006e, code lost:
    
        if (r1 != 0) goto L31;
     */
    /* JADX WARN: Code restructure failed: missing block: B:46:0x0071, code lost:
    
        if (r2 == 0) goto L33;
     */
    /* JADX WARN: Code restructure failed: missing block: B:47:0x0073, code lost:
    
        return r2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x0076, code lost:
    
        if (r0.f12375c <= 0) goto L63;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x007c, code lost:
    
        switch(r0.a()) {
            case 14: goto L66;
            case 15: goto L66;
            case 16: goto L65;
            case 17: goto L65;
            case 18: goto L64;
            default: goto L70;
        };
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x0080, code lost:
    
        r3 = r3 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x0083, code lost:
    
        if (r1 != r3) goto L41;
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x0086, code lost:
    
        r3 = r3 - 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x0089, code lost:
    
        if (r1 != r3) goto L41;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x008c, code lost:
    
        return 0;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int a(CharSequence charSequence) {
        byte directionality;
        a aVar = new a(charSequence);
        aVar.f12375c = 0;
        int i5 = 0;
        int i6 = 0;
        int i10 = 0;
        while (true) {
            int i11 = aVar.f12375c;
            if (i11 < aVar.f12374b && i5 == 0) {
                CharSequence charSequence2 = aVar.a;
                char charAt = charSequence2.charAt(i11);
                aVar.f12376d = charAt;
                if (Character.isHighSurrogate(charAt)) {
                    int codePointAt = Character.codePointAt(charSequence2, aVar.f12375c);
                    aVar.f12375c = Character.charCount(codePointAt) + aVar.f12375c;
                    directionality = Character.getDirectionality(codePointAt);
                } else {
                    aVar.f12375c++;
                    char c6 = aVar.f12376d;
                    directionality = c6 < 1792 ? a.f12373e[c6] : Character.getDirectionality(c6);
                }
                if (directionality != 0) {
                    if (directionality == 1 || directionality == 2) {
                        if (i10 == 0) {
                        }
                    } else if (directionality != 9) {
                        switch (directionality) {
                            case 14:
                            case 15:
                                i10++;
                                i6 = -1;
                                continue;
                            case 16:
                            case 17:
                                i10++;
                                i6 = 1;
                                continue;
                            case 18:
                                i10--;
                                i6 = 0;
                                continue;
                        }
                    }
                } else if (i10 == 0) {
                }
                i5 = i10;
            }
        }
        return -1;
    }

    /* JADX WARN: Code restructure failed: missing block: B:28:0x0034, code lost:
    
        return 1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static int b(CharSequence charSequence) {
        a aVar = new a(charSequence);
        aVar.f12375c = aVar.f12374b;
        int i5 = 0;
        while (true) {
            int i6 = i5;
            while (aVar.f12375c > 0) {
                byte a = aVar.a();
                if (a != 0) {
                    if (a == 1 || a == 2) {
                        if (i5 != 0) {
                            if (i6 == 0) {
                                break;
                            }
                        }
                    } else if (a != 9) {
                        switch (a) {
                            case 14:
                            case 15:
                                if (i6 == i5) {
                                    return -1;
                                }
                                i5--;
                                break;
                            case 16:
                            case 17:
                                if (i6 == i5) {
                                    break;
                                }
                                i5--;
                                break;
                            case 18:
                                i5++;
                                break;
                            default:
                                if (i6 != 0) {
                                    break;
                                } else {
                                    break;
                                }
                                break;
                        }
                    } else {
                        continue;
                    }
                } else {
                    if (i5 == 0) {
                        return -1;
                    }
                    if (i6 == 0) {
                        break;
                    }
                }
            }
            return 0;
        }
    }

    public static b c() {
        return TextUtils.getLayoutDirectionFromLocale(Locale.getDefault()) == 1 ? f12380e : f12379d;
    }

    public final SpannableStringBuilder d(CharSequence charSequence) {
        h0 h0Var = d.f12382c;
        if (charSequence == null) {
            return null;
        }
        boolean o6 = h0Var.o(charSequence.length(), charSequence);
        SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
        boolean o7 = (o6 ? d.f12381b : d.a).o(charSequence.length(), charSequence);
        String str = "";
        String str2 = f12378c;
        String str3 = f12377b;
        boolean z5 = this.a;
        spannableStringBuilder.append((CharSequence) ((z5 || !(o7 || a(charSequence) == 1)) ? (!z5 || (o7 && a(charSequence) != -1)) ? "" : str2 : str3));
        if (o6 != z5) {
            spannableStringBuilder.append(o6 ? (char) 8235 : (char) 8234);
            spannableStringBuilder.append(charSequence);
            spannableStringBuilder.append((char) 8236);
        } else {
            spannableStringBuilder.append(charSequence);
        }
        boolean o10 = (o6 ? d.f12381b : d.a).o(charSequence.length(), charSequence);
        if (!z5 && (o10 || b(charSequence) == 1)) {
            str = str3;
        } else if (z5 && (!o10 || b(charSequence) == -1)) {
            str = str2;
        }
        spannableStringBuilder.append((CharSequence) str);
        return spannableStringBuilder;
    }
}
