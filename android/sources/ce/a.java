package ce;

import android.text.Html;
import android.text.Spanned;
import android.text.TextUtils;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ke.w;
import wd.b;
import wd.d;
import wd.e;

/* loaded from: classes3.dex */
public final class a extends d {

    /* renamed from: o, reason: collision with root package name */
    public static final Pattern f3489o = Pattern.compile("\\s*((?:(\\d+):)?(\\d+):(\\d+)(?:,(\\d+))?)\\s*-->\\s*((?:(\\d+):)?(\\d+):(\\d+)(?:,(\\d+))?)\\s*");

    /* renamed from: p, reason: collision with root package name */
    public static final Pattern f3490p = Pattern.compile("\\{\\\\.*?\\}");

    /* renamed from: m, reason: collision with root package name */
    public final StringBuilder f3491m = new StringBuilder();

    /* renamed from: n, reason: collision with root package name */
    public final ArrayList f3492n = new ArrayList();

    public static long h(Matcher matcher, int i5) {
        String group = matcher.group(i5 + 1);
        long parseLong = group != null ? Long.parseLong(group) * LogThrottleSingleton.RATE_LIMIT_ONE_HOUR : 0L;
        String group2 = matcher.group(i5 + 2);
        group2.getClass();
        long parseLong2 = (Long.parseLong(group2) * LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE) + parseLong;
        String group3 = matcher.group(i5 + 3);
        group3.getClass();
        long parseLong3 = (Long.parseLong(group3) * 1000) + parseLong2;
        String group4 = matcher.group(i5 + 4);
        if (group4 != null) {
            parseLong3 += Long.parseLong(group4);
        }
        return parseLong3 * 1000;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:100:0x0151, code lost:
    
        if (r8.equals("{\\an6}") != false) goto L66;
     */
    /* JADX WARN: Code restructure failed: missing block: B:103:0x015d, code lost:
    
        if (r8.equals("{\\an4}") != false) goto L70;
     */
    /* JADX WARN: Code restructure failed: missing block: B:105:0x0164, code lost:
    
        if (r8.equals("{\\an3}") != false) goto L66;
     */
    /* JADX WARN: Code restructure failed: missing block: B:108:0x0171, code lost:
    
        if (r8.equals("{\\an1}") != false) goto L70;
     */
    /* JADX WARN: Code restructure failed: missing block: B:118:0x0244, code lost:
    
        return new e4.e(6, (wd.b[]) r2.toArray(new wd.b[r6]), java.util.Arrays.copyOf(r3, r7));
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x013e, code lost:
    
        if (r8.equals("{\\an9}") != false) goto L66;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x0166, code lost:
    
        r6 = 2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:0x0182, code lost:
    
        if (r8.equals("{\\an9}") != false) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:0x0192, code lost:
    
        r0 = 0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x0189, code lost:
    
        if (r8.equals("{\\an8}") != false) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x0190, code lost:
    
        if (r8.equals("{\\an7}") != false) goto L83;
     */
    /* JADX WARN: Code restructure failed: missing block: B:88:0x01a7, code lost:
    
        if (r8.equals("{\\an3}") != false) goto L95;
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x01b7, code lost:
    
        r0 = 2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:91:0x01ae, code lost:
    
        if (r8.equals("{\\an2}") != false) goto L95;
     */
    /* JADX WARN: Code restructure failed: missing block: B:93:0x01b5, code lost:
    
        if (r8.equals("{\\an1}") != false) goto L95;
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x014a, code lost:
    
        if (r8.equals("{\\an7}") != false) goto L70;
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x0173, code lost:
    
        r6 = 0;
     */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue
    java.lang.NullPointerException: Cannot invoke "java.util.List.iterator()" because the return value of "jadx.core.dex.visitors.regions.SwitchOverStringVisitor$SwitchData.getNewCases()" is null
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.restoreSwitchOverString(SwitchOverStringVisitor.java:109)
    	at jadx.core.dex.visitors.regions.SwitchOverStringVisitor.visitRegion(SwitchOverStringVisitor.java:66)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:77)
    	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseIterativeStepInternal(DepthRegionTraversal.java:82)
     */
    @Override // wd.d
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final e e(byte[] bArr, int i5, boolean z5) {
        String h6;
        String str;
        long[] jArr;
        w wVar;
        int i6;
        int i10;
        int i11;
        int i12;
        float f2;
        b bVar;
        a aVar = this;
        ArrayList arrayList = new ArrayList();
        long[] jArr2 = new long[32];
        w wVar2 = new w(bArr, i5);
        Charset B = wVar2.B();
        if (B == null) {
            B = ei.d.f8100c;
        }
        int i13 = 0;
        int i14 = 0;
        while (true) {
            String h7 = wVar2.h(B);
            if (h7 != null) {
                if (h7.length() != 0) {
                    try {
                        Integer.parseInt(h7);
                        h6 = wVar2.h(B);
                    } catch (NumberFormatException unused) {
                        ke.b.N("SubripDecoder", "Skipping invalid index: ".concat(h7));
                    }
                    if (h6 == null) {
                        ke.b.N("SubripDecoder", "Unexpected end");
                    } else {
                        Matcher matcher = f3489o.matcher(h6);
                        if (matcher.matches()) {
                            long h10 = h(matcher, 1);
                            if (i14 == jArr2.length) {
                                jArr2 = Arrays.copyOf(jArr2, i14 * 2);
                            }
                            int i15 = i14 + 1;
                            jArr2[i14] = h10;
                            long h11 = h(matcher, 6);
                            if (i15 == jArr2.length) {
                                jArr2 = Arrays.copyOf(jArr2, i15 * 2);
                            }
                            i14 += 2;
                            jArr2[i15] = h11;
                            StringBuilder sb2 = aVar.f3491m;
                            sb2.setLength(i13);
                            ArrayList arrayList2 = aVar.f3492n;
                            arrayList2.clear();
                            String h12 = wVar2.h(B);
                            while (!TextUtils.isEmpty(h12)) {
                                if (sb2.length() > 0) {
                                    sb2.append("<br>");
                                }
                                String trim = h12.trim();
                                StringBuilder sb3 = new StringBuilder(trim);
                                Matcher matcher2 = f3490p.matcher(trim);
                                int i16 = i13;
                                while (matcher2.find()) {
                                    String group = matcher2.group();
                                    arrayList2.add(group);
                                    int start = matcher2.start() - i16;
                                    int length = group.length();
                                    sb3.replace(start, start + length, "");
                                    i16 += length;
                                }
                                sb2.append(sb3.toString());
                                h12 = wVar2.h(B);
                                i13 = 0;
                            }
                            Spanned fromHtml = Html.fromHtml(sb2.toString());
                            int i17 = 0;
                            while (true) {
                                if (i17 < arrayList2.size()) {
                                    str = (String) arrayList2.get(i17);
                                    if (!str.matches("\\{\\\\an[1-9]\\}")) {
                                        i17++;
                                    }
                                } else {
                                    str = null;
                                }
                            }
                            if (str == null) {
                                bVar = new b(fromHtml, null, null, null, -3.4028235E38f, Integer.MIN_VALUE, Integer.MIN_VALUE, -3.4028235E38f, Integer.MIN_VALUE, Integer.MIN_VALUE, -3.4028235E38f, -3.4028235E38f, -3.4028235E38f, false, -16777216, Integer.MIN_VALUE, 0.0f);
                                jArr = jArr2;
                                wVar = wVar2;
                            } else {
                                jArr = jArr2;
                                wVar = wVar2;
                                switch (str.hashCode()) {
                                    case -685620710:
                                        break;
                                    case -685620679:
                                        str.equals("{\\an2}");
                                        i6 = 1;
                                        break;
                                    case -685620648:
                                        break;
                                    case -685620617:
                                        break;
                                    case -685620586:
                                        str.equals("{\\an5}");
                                        i6 = 1;
                                        break;
                                    case -685620555:
                                        break;
                                    case -685620524:
                                        break;
                                    case -685620493:
                                        str.equals("{\\an8}");
                                        i6 = 1;
                                        break;
                                    case -685620462:
                                        break;
                                    default:
                                        i6 = 1;
                                        break;
                                }
                                switch (str.hashCode()) {
                                    case -685620710:
                                        break;
                                    case -685620679:
                                        break;
                                    case -685620648:
                                        break;
                                    case -685620617:
                                        str.equals("{\\an4}");
                                        i10 = 1;
                                        break;
                                    case -685620586:
                                        str.equals("{\\an5}");
                                        i10 = 1;
                                        break;
                                    case -685620555:
                                        str.equals("{\\an6}");
                                        i10 = 1;
                                        break;
                                    case -685620524:
                                        break;
                                    case -685620493:
                                        break;
                                    case -685620462:
                                        break;
                                    default:
                                        i10 = 1;
                                        break;
                                }
                                float f10 = 0.08f;
                                if (i6 != 0) {
                                    i11 = 1;
                                    if (i6 != 1) {
                                        i12 = 2;
                                        if (i6 != 2) {
                                            throw new IllegalArgumentException();
                                        }
                                        f2 = 0.92f;
                                    } else {
                                        i12 = 2;
                                        f2 = 0.5f;
                                    }
                                } else {
                                    i11 = 1;
                                    i12 = 2;
                                    f2 = 0.08f;
                                }
                                if (i10 != 0) {
                                    if (i10 == i11) {
                                        f10 = 0.5f;
                                    } else {
                                        if (i10 != i12) {
                                            throw new IllegalArgumentException();
                                        }
                                        f10 = 0.92f;
                                    }
                                }
                                bVar = new b(fromHtml, null, null, null, f10, 0, i10, f2, i6, Integer.MIN_VALUE, -3.4028235E38f, -3.4028235E38f, -3.4028235E38f, false, -16777216, Integer.MIN_VALUE, 0.0f);
                            }
                            arrayList.add(bVar);
                            arrayList.add(b.O);
                            aVar = this;
                            jArr2 = jArr;
                            wVar2 = wVar;
                            i13 = 0;
                        } else {
                            ke.b.N("SubripDecoder", "Skipping invalid timing: ".concat(h6));
                            aVar = this;
                            i13 = 0;
                        }
                    }
                }
            }
        }
    }
}
