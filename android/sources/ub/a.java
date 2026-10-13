package ub;

import java.nio.charset.Charset;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;
import java.util.regex.Pattern;
import tb.c;
import wb.k;
import ys.l;

/* loaded from: classes3.dex */
public final class a implements k {

    /* renamed from: c, reason: collision with root package name */
    public static final String f18818c;

    /* renamed from: d, reason: collision with root package name */
    public static final Set f18819d;

    /* renamed from: e, reason: collision with root package name */
    public static final a f18820e;

    /* renamed from: f, reason: collision with root package name */
    public static final a f18821f;
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f18822b;

    static {
        String q5 = l.q("hts/frbslgiggolai.o/0clgbthfra=snpoo", "tp:/ieaeogn.ogepscmvc/o/ac?omtjo_rt3");
        f18818c = q5;
        String q6 = l.q("hts/frbslgigp.ogepscmv/ieo/eaybtho", "tp:/ieaeogn-agolai.o/1frlglgc/aclg");
        String q7 = l.q("AzSCki82AwsLzKd5O8zo", "IayckHiZRO1EFl1aGoK");
        f18819d = Collections.unmodifiableSet(new HashSet(Arrays.asList(new c("proto"), new c("json"))));
        f18820e = new a(q5, null);
        f18821f = new a(q6, q7);
    }

    public a(String str, String str2) {
        this.a = str;
        this.f18822b = str2;
    }

    public static a a(byte[] bArr) {
        String str = new String(bArr, Charset.forName("UTF-8"));
        if (!str.startsWith("1$")) {
            throw new IllegalArgumentException("Version marker missing from extras");
        }
        String[] split = str.substring(2).split(Pattern.quote("\\"), 2);
        if (split.length != 2) {
            throw new IllegalArgumentException("Extra is not a valid encoded LegacyFlgDestination");
        }
        String str2 = split[0];
        if (str2.isEmpty()) {
            throw new IllegalArgumentException("Missing endpoint in CCTDestination extras");
        }
        String str3 = split[1];
        if (str3.isEmpty()) {
            str3 = null;
        }
        return new a(str2, str3);
    }
}
