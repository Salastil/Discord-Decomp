package td;

import android.net.Uri;
import android.text.TextUtils;
import android.util.Base64;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.animated.InterpolationAnimatedNode;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import fi.e0;
import hc.f0;
import hc.g1;
import ie.m0;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigDecimal;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import java.util.UUID;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import k2.r;
import ke.d0;
import sd.v;
import sd.w;

/* loaded from: classes3.dex */
public final class o implements m0 {

    /* renamed from: d, reason: collision with root package name */
    public final l f18358d;

    /* renamed from: e, reason: collision with root package name */
    public final i f18359e;

    /* renamed from: i, reason: collision with root package name */
    public static final Pattern f18336i = Pattern.compile("AVERAGE-BANDWIDTH=(\\d+)\\b");

    /* renamed from: v, reason: collision with root package name */
    public static final Pattern f18350v = Pattern.compile("VIDEO=\"(.+?)\"");

    /* renamed from: w, reason: collision with root package name */
    public static final Pattern f18352w = Pattern.compile("AUDIO=\"(.+?)\"");

    /* renamed from: x, reason: collision with root package name */
    public static final Pattern f18354x = Pattern.compile("SUBTITLES=\"(.+?)\"");

    /* renamed from: y, reason: collision with root package name */
    public static final Pattern f18356y = Pattern.compile("CLOSED-CAPTIONS=\"(.+?)\"");
    public static final Pattern E = Pattern.compile("[^-]BANDWIDTH=(\\d+)\\b");
    public static final Pattern F = Pattern.compile("CHANNELS=\"(.+?)\"");
    public static final Pattern G = Pattern.compile("CODECS=\"(.+?)\"");
    public static final Pattern H = Pattern.compile("RESOLUTION=(\\d+x\\d+)");
    public static final Pattern I = Pattern.compile("FRAME-RATE=([\\d\\.]+)\\b");
    public static final Pattern J = Pattern.compile("#EXT-X-TARGETDURATION:(\\d+)\\b");
    public static final Pattern K = Pattern.compile("DURATION=([\\d\\.]+)\\b");
    public static final Pattern L = Pattern.compile("PART-TARGET=([\\d\\.]+)\\b");
    public static final Pattern M = Pattern.compile("#EXT-X-VERSION:(\\d+)\\b");
    public static final Pattern N = Pattern.compile("#EXT-X-PLAYLIST-TYPE:(.+)\\b");
    public static final Pattern O = Pattern.compile("CAN-SKIP-UNTIL=([\\d\\.]+)\\b");
    public static final Pattern P = a("CAN-SKIP-DATERANGES");
    public static final Pattern Q = Pattern.compile("SKIPPED-SEGMENTS=(\\d+)\\b");
    public static final Pattern R = Pattern.compile("[:|,]HOLD-BACK=([\\d\\.]+)\\b");
    public static final Pattern S = Pattern.compile("PART-HOLD-BACK=([\\d\\.]+)\\b");
    public static final Pattern T = a("CAN-BLOCK-RELOAD");
    public static final Pattern U = Pattern.compile("#EXT-X-MEDIA-SEQUENCE:(\\d+)\\b");
    public static final Pattern V = Pattern.compile("#EXTINF:([\\d\\.]+)\\b");
    public static final Pattern W = Pattern.compile("#EXTINF:[\\d\\.]+\\b,(.+)");
    public static final Pattern X = Pattern.compile("LAST-MSN=(\\d+)\\b");
    public static final Pattern Y = Pattern.compile("LAST-PART=(\\d+)\\b");
    public static final Pattern Z = Pattern.compile("TIME-OFFSET=(-?[\\d\\.]+)\\b");
    public static final Pattern a0 = Pattern.compile("#EXT-X-BYTERANGE:(\\d+(?:@\\d+)?)\\b");

    /* renamed from: b0, reason: collision with root package name */
    public static final Pattern f18330b0 = Pattern.compile("BYTERANGE=\"(\\d+(?:@\\d+)?)\\b\"");

    /* renamed from: c0, reason: collision with root package name */
    public static final Pattern f18331c0 = Pattern.compile("BYTERANGE-START=(\\d+)\\b");

    /* renamed from: d0, reason: collision with root package name */
    public static final Pattern f18332d0 = Pattern.compile("BYTERANGE-LENGTH=(\\d+)\\b");

    /* renamed from: e0, reason: collision with root package name */
    public static final Pattern f18333e0 = Pattern.compile("METHOD=(NONE|AES-128|SAMPLE-AES|SAMPLE-AES-CENC|SAMPLE-AES-CTR)\\s*(?:,|$)");

    /* renamed from: f0, reason: collision with root package name */
    public static final Pattern f18334f0 = Pattern.compile("KEYFORMAT=\"(.+?)\"");

    /* renamed from: g0, reason: collision with root package name */
    public static final Pattern f18335g0 = Pattern.compile("KEYFORMATVERSIONS=\"(.+?)\"");
    public static final Pattern h0 = Pattern.compile("URI=\"(.+?)\"");

    /* renamed from: i0, reason: collision with root package name */
    public static final Pattern f18337i0 = Pattern.compile("IV=([^,.*]+)");

    /* renamed from: j0, reason: collision with root package name */
    public static final Pattern f18338j0 = Pattern.compile("TYPE=(AUDIO|VIDEO|SUBTITLES|CLOSED-CAPTIONS)");

    /* renamed from: k0, reason: collision with root package name */
    public static final Pattern f18339k0 = Pattern.compile("TYPE=(PART|MAP)");

    /* renamed from: l0, reason: collision with root package name */
    public static final Pattern f18340l0 = Pattern.compile("LANGUAGE=\"(.+?)\"");

    /* renamed from: m0, reason: collision with root package name */
    public static final Pattern f18341m0 = Pattern.compile("NAME=\"(.+?)\"");

    /* renamed from: n0, reason: collision with root package name */
    public static final Pattern f18342n0 = Pattern.compile("GROUP-ID=\"(.+?)\"");

    /* renamed from: o0, reason: collision with root package name */
    public static final Pattern f18343o0 = Pattern.compile("CHARACTERISTICS=\"(.+?)\"");

    /* renamed from: p0, reason: collision with root package name */
    public static final Pattern f18344p0 = Pattern.compile("INSTREAM-ID=\"((?:CC|SERVICE)\\d+)\"");

    /* renamed from: q0, reason: collision with root package name */
    public static final Pattern f18345q0 = a("AUTOSELECT");

    /* renamed from: r0, reason: collision with root package name */
    public static final Pattern f18346r0 = a("DEFAULT");

    /* renamed from: s0, reason: collision with root package name */
    public static final Pattern f18347s0 = a("FORCED");

    /* renamed from: t0, reason: collision with root package name */
    public static final Pattern f18348t0 = a("INDEPENDENT");

    /* renamed from: u0, reason: collision with root package name */
    public static final Pattern f18349u0 = a("GAP");

    /* renamed from: v0, reason: collision with root package name */
    public static final Pattern f18351v0 = a("PRECISE");

    /* renamed from: w0, reason: collision with root package name */
    public static final Pattern f18353w0 = Pattern.compile("VALUE=\"(.+?)\"");

    /* renamed from: x0, reason: collision with root package name */
    public static final Pattern f18355x0 = Pattern.compile("IMPORT=\"(.+?)\"");

    /* renamed from: y0, reason: collision with root package name */
    public static final Pattern f18357y0 = Pattern.compile("\\{\\$([a-zA-Z0-9\\-_]+)\\}");

    public o(l lVar, i iVar) {
        this.f18358d = lVar;
        this.f18359e = iVar;
    }

    public static Pattern a(String str) {
        return Pattern.compile(str.concat("=(NO|YES)"));
    }

    public static nc.i b(String str, nc.h[] hVarArr) {
        nc.h[] hVarArr2 = new nc.h[hVarArr.length];
        for (int i5 = 0; i5 < hVarArr.length; i5++) {
            nc.h hVar = hVarArr[i5];
            hVarArr2[i5] = new nc.h(hVar.f15033e, hVar.f15034i, hVar.f15035v, null);
        }
        return new nc.i(str, true, hVarArr2);
    }

    public static nc.h c(String str, String str2, HashMap hashMap) {
        String j = j(str, f18335g0, "1", hashMap);
        boolean equals = "urn:uuid:edef8ba9-79d6-4ace-a3c8-27dcd51d21ed".equals(str2);
        Pattern pattern = h0;
        if (equals) {
            String k = k(str, pattern, hashMap);
            return new nc.h(hc.h.f9711d, null, "video/mp4", Base64.decode(k.substring(k.indexOf(44)), 0));
        }
        if ("com.widevine".equals(str2)) {
            UUID uuid = hc.h.f9711d;
            int i5 = d0.a;
            return new nc.h(uuid, null, "hls", str.getBytes(ei.d.f8100c));
        }
        if (!"com.microsoft.playready".equals(str2) || !"1".equals(j)) {
            return null;
        }
        String k5 = k(str, pattern, hashMap);
        byte[] decode = Base64.decode(k5.substring(k5.indexOf(44)), 0);
        UUID uuid2 = hc.h.f9712e;
        return new nc.h(uuid2, null, "video/mp4", yc.j.a(uuid2, null, decode));
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:134:0x0791  */
    /* JADX WARN: Removed duplicated region for block: B:138:0x07c8  */
    /* JADX WARN: Removed duplicated region for block: B:141:0x07cb  */
    /* JADX WARN: Removed duplicated region for block: B:142:0x07ae  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static i d(l lVar, i iVar, r rVar, String str) {
        ArrayList arrayList;
        h hVar;
        f fVar;
        long j;
        String str2;
        long j5;
        String str3;
        boolean z5;
        String str4;
        ArrayList arrayList2;
        ArrayList arrayList3;
        int i5;
        nc.i iVar2;
        long j7;
        nc.i iVar3;
        f fVar2;
        nc.i iVar4;
        String str5;
        nc.i iVar5;
        int i6;
        l lVar2 = lVar;
        i iVar6 = iVar;
        boolean z6 = lVar2.f18329c;
        HashMap hashMap = new HashMap();
        HashMap hashMap2 = new HashMap();
        ArrayList arrayList4 = new ArrayList();
        ArrayList arrayList5 = new ArrayList();
        ArrayList arrayList6 = new ArrayList();
        ArrayList arrayList7 = new ArrayList();
        h hVar2 = new h(-9223372036854775807L, false, -9223372036854775807L, -9223372036854775807L, false);
        TreeMap treeMap = new TreeMap();
        boolean z7 = z6;
        String str6 = "";
        long j10 = -9223372036854775807L;
        long j11 = 0;
        long j12 = 0;
        long j13 = 0;
        long j14 = 0;
        long j15 = 0;
        long j16 = 0;
        long j17 = 0;
        long j18 = -1;
        boolean z8 = false;
        d dVar = null;
        int i10 = 0;
        nc.i iVar7 = null;
        f fVar3 = null;
        nc.i iVar8 = null;
        int i11 = 0;
        String str7 = null;
        String str8 = null;
        boolean z10 = false;
        int i12 = 0;
        boolean z11 = false;
        int i13 = 0;
        String str9 = null;
        boolean z12 = false;
        boolean z13 = false;
        long j19 = -9223372036854775807L;
        long j20 = -9223372036854775807L;
        long j21 = 0;
        int i14 = 1;
        while (rVar.y()) {
            String E2 = rVar.E();
            if (E2.startsWith("#EXT")) {
                arrayList7.add(E2);
            }
            if (E2.startsWith("#EXT-X-PLAYLIST-TYPE")) {
                String k = k(E2, N, hashMap);
                if ("VOD".equals(k)) {
                    i10 = 1;
                } else if ("EVENT".equals(k)) {
                    i10 = 2;
                }
            } else if (E2.equals("#EXT-X-I-FRAMES-ONLY")) {
                z12 = true;
            } else {
                if (E2.startsWith("#EXT-X-START")) {
                    double parseDouble = Double.parseDouble(k(E2, Z, Collections.EMPTY_MAP));
                    arrayList = arrayList7;
                    hVar = hVar2;
                    z8 = g(E2, f18351v0);
                    j10 = (long) (parseDouble * 1000000.0d);
                } else {
                    arrayList = arrayList7;
                    hVar = hVar2;
                    if (E2.startsWith("#EXT-X-SERVER-CONTROL")) {
                        double h6 = h(E2, O);
                        long j22 = h6 == -9.223372036854776E18d ? -9223372036854775807L : (long) (h6 * 1000000.0d);
                        boolean g6 = g(E2, P);
                        double h7 = h(E2, R);
                        long j23 = h7 == -9.223372036854776E18d ? -9223372036854775807L : (long) (h7 * 1000000.0d);
                        double h10 = h(E2, S);
                        hVar = new h(j22, g6, j23, h10 == -9.223372036854776E18d ? -9223372036854775807L : (long) (h10 * 1000000.0d), g(E2, T));
                    } else if (E2.startsWith("#EXT-X-PART-INF")) {
                        j20 = (long) (Double.parseDouble(k(E2, L, Collections.EMPTY_MAP)) * 1000000.0d);
                    } else {
                        boolean startsWith = E2.startsWith("#EXT-X-MAP");
                        Pattern pattern = f18330b0;
                        boolean z14 = z8;
                        Pattern pattern2 = h0;
                        if (startsWith) {
                            String k5 = k(E2, pattern2, hashMap);
                            String j24 = j(E2, pattern, null, hashMap);
                            if (j24 != null) {
                                int i15 = d0.a;
                                String[] split = j24.split("@", -1);
                                j18 = Long.parseLong(split[i12]);
                                if (split.length > 1) {
                                    j14 = Long.parseLong(split[1]);
                                }
                            }
                            long j25 = j18 == -1 ? 0L : j14;
                            if (str7 != null && str8 == null) {
                                throw g1.b("The encryption IV attribute must be present when an initialization segment is encrypted with METHOD=AES-128.", null);
                            }
                            String str10 = str7;
                            f fVar4 = new f(j25, j18, k5, str10, str8);
                            str7 = str10;
                            String str11 = str8;
                            if (j18 != -1) {
                                j25 += j18;
                            }
                            j14 = j25;
                            arrayList7 = arrayList;
                            fVar3 = fVar4;
                            j18 = -1;
                            hVar2 = hVar;
                            z8 = z14;
                            str8 = str11;
                        } else {
                            String str12 = str8;
                            ArrayList arrayList8 = arrayList5;
                            ArrayList arrayList9 = arrayList6;
                            if (E2.startsWith("#EXT-X-TARGETDURATION")) {
                                j19 = Integer.parseInt(k(E2, J, Collections.EMPTY_MAP)) * 1000000;
                            } else if (E2.startsWith("#EXT-X-MEDIA-SEQUENCE")) {
                                j13 = Long.parseLong(k(E2, U, Collections.EMPTY_MAP));
                                j21 = j13;
                            } else if (E2.startsWith("#EXT-X-VERSION")) {
                                i14 = Integer.parseInt(k(E2, M, Collections.EMPTY_MAP));
                            } else {
                                if (E2.startsWith("#EXT-X-DEFINE")) {
                                    String j26 = j(E2, f18355x0, null, hashMap);
                                    if (j26 != null) {
                                        String str13 = (String) lVar2.f18326l.get(j26);
                                        if (str13 != null) {
                                            hashMap.put(j26, str13);
                                        }
                                    } else {
                                        hashMap.put(k(E2, f18341m0, hashMap), k(E2, f18353w0, hashMap));
                                    }
                                    fVar = fVar3;
                                    j = j11;
                                    str2 = str7;
                                    j5 = j18;
                                    str3 = str9;
                                } else if (E2.startsWith("#EXTINF")) {
                                    j16 = new BigDecimal(k(E2, V, Collections.EMPTY_MAP)).multiply(new BigDecimal(1000000L)).longValue();
                                    str6 = j(E2, W, "", hashMap);
                                } else if (E2.startsWith("#EXT-X-SKIP")) {
                                    int parseInt = Integer.parseInt(k(E2, Q, Collections.EMPTY_MAP));
                                    ke.b.k((iVar6 == null || !arrayList4.isEmpty()) ? i12 : 1);
                                    int i16 = d0.a;
                                    long j27 = iVar6.k;
                                    e0 e0Var = iVar6.f18307r;
                                    int i17 = (int) (j21 - j27);
                                    int i18 = parseInt + i17;
                                    if (i17 < 0 || i18 > e0Var.size()) {
                                        throw new n();
                                    }
                                    long j28 = j15;
                                    str8 = str12;
                                    while (i17 < i18) {
                                        f fVar5 = (f) e0Var.get(i17);
                                        if (j21 != iVar6.k) {
                                            int i19 = (iVar6.j - i13) + fVar5.f18287v;
                                            e0 e0Var2 = fVar5.J;
                                            ArrayList arrayList10 = new ArrayList();
                                            int i20 = i12;
                                            long j29 = j28;
                                            while (i20 < e0Var2.size()) {
                                                d dVar2 = (d) e0Var2.get(i20);
                                                arrayList10.add(new d(dVar2.f18284d, dVar2.f18285e, dVar2.f18286i, i19, j29, dVar2.f18289x, dVar2.f18290y, dVar2.E, dVar2.F, dVar2.G, dVar2.H, dVar2.I, dVar2.J));
                                                j29 += dVar2.f18286i;
                                                i20++;
                                                i18 = i18;
                                            }
                                            i6 = i18;
                                            fVar5 = new f(fVar5.f18284d, fVar5.f18285e, fVar5.I, fVar5.f18286i, i19, j28, fVar5.f18289x, fVar5.f18290y, fVar5.E, fVar5.F, fVar5.G, fVar5.H, arrayList10);
                                        } else {
                                            i6 = i18;
                                        }
                                        arrayList4.add(fVar5);
                                        long j30 = fVar5.f18286i;
                                        String str14 = fVar5.E;
                                        j28 += j30;
                                        long j31 = fVar5.G;
                                        if (j31 != -1) {
                                            j14 = fVar5.F + j31;
                                        }
                                        int i21 = fVar5.f18287v;
                                        f fVar6 = fVar5.f18285e;
                                        nc.i iVar9 = fVar5.f18289x;
                                        String str15 = fVar5.f18290y;
                                        if (str14 == null || !str14.equals(Long.toHexString(j13))) {
                                            str8 = str14;
                                        }
                                        j13++;
                                        i17++;
                                        i11 = i21;
                                        fVar3 = fVar6;
                                        str7 = str15;
                                        iVar7 = iVar9;
                                        i18 = i6;
                                        j11 = j28;
                                        iVar6 = iVar;
                                    }
                                    lVar2 = lVar;
                                    iVar6 = iVar;
                                    hVar2 = hVar;
                                    z8 = z14;
                                    arrayList7 = arrayList;
                                    arrayList6 = arrayList9;
                                    arrayList5 = arrayList8;
                                    j15 = j28;
                                } else if (E2.startsWith("#EXT-X-KEY")) {
                                    String k7 = k(E2, f18333e0, hashMap);
                                    String j32 = j(E2, f18334f0, InterpolationAnimatedNode.EXTRAPOLATE_TYPE_IDENTITY, hashMap);
                                    if ("NONE".equals(k7)) {
                                        treeMap.clear();
                                        iVar7 = null;
                                        str7 = null;
                                        str8 = null;
                                    } else {
                                        String j33 = j(E2, f18337i0, null, hashMap);
                                        if (!InterpolationAnimatedNode.EXTRAPOLATE_TYPE_IDENTITY.equals(j32)) {
                                            String str16 = str9;
                                            str9 = str16 == null ? ("SAMPLE-AES-CENC".equals(k7) || "SAMPLE-AES-CTR".equals(k7)) ? "cenc" : "cbcs" : str16;
                                            nc.h c6 = c(E2, j32, hashMap);
                                            if (c6 != null) {
                                                treeMap.put(j32, c6);
                                                str8 = j33;
                                                iVar7 = null;
                                                str7 = null;
                                            }
                                        } else if ("AES-128".equals(k7)) {
                                            str7 = k(E2, pattern2, hashMap);
                                            str8 = j33;
                                        }
                                        str8 = j33;
                                        str7 = null;
                                    }
                                    lVar2 = lVar;
                                    iVar6 = iVar;
                                    hVar2 = hVar;
                                    z8 = z14;
                                    arrayList7 = arrayList;
                                    arrayList6 = arrayList9;
                                    arrayList5 = arrayList8;
                                } else {
                                    str3 = str9;
                                    if (E2.startsWith("#EXT-X-BYTERANGE")) {
                                        String k10 = k(E2, a0, hashMap);
                                        int i22 = d0.a;
                                        String[] split2 = k10.split("@", -1);
                                        j18 = Long.parseLong(split2[i12]);
                                        if (split2.length > 1) {
                                            j14 = Long.parseLong(split2[1]);
                                        }
                                    } else if (E2.startsWith("#EXT-X-DISCONTINUITY-SEQUENCE")) {
                                        i13 = Integer.parseInt(E2.substring(E2.indexOf(58) + 1));
                                        lVar2 = lVar;
                                        iVar6 = iVar;
                                        str9 = str3;
                                        hVar2 = hVar;
                                        z8 = z14;
                                        str8 = str12;
                                        arrayList7 = arrayList;
                                        arrayList6 = arrayList9;
                                        arrayList5 = arrayList8;
                                        z11 = true;
                                    } else if (E2.equals("#EXT-X-DISCONTINUITY")) {
                                        i11++;
                                    } else if (E2.startsWith("#EXT-X-PROGRAM-DATE-TIME")) {
                                        if (j12 == 0) {
                                            j12 = d0.I(d0.L(E2.substring(E2.indexOf(58) + 1))) - j15;
                                        } else {
                                            fVar = fVar3;
                                            j = j11;
                                            str2 = str7;
                                            j5 = j18;
                                        }
                                    } else if (E2.equals("#EXT-X-GAP")) {
                                        lVar2 = lVar;
                                        iVar6 = iVar;
                                        str9 = str3;
                                        hVar2 = hVar;
                                        z8 = z14;
                                        str8 = str12;
                                        arrayList7 = arrayList;
                                        arrayList6 = arrayList9;
                                        arrayList5 = arrayList8;
                                        z13 = true;
                                    } else if (E2.equals("#EXT-X-INDEPENDENT-SEGMENTS")) {
                                        lVar2 = lVar;
                                        iVar6 = iVar;
                                        str9 = str3;
                                        hVar2 = hVar;
                                        z8 = z14;
                                        str8 = str12;
                                        arrayList7 = arrayList;
                                        arrayList6 = arrayList9;
                                        arrayList5 = arrayList8;
                                        z7 = true;
                                    } else if (E2.equals("#EXT-X-ENDLIST")) {
                                        lVar2 = lVar;
                                        iVar6 = iVar;
                                        str9 = str3;
                                        hVar2 = hVar;
                                        z8 = z14;
                                        str8 = str12;
                                        arrayList7 = arrayList;
                                        arrayList6 = arrayList9;
                                        arrayList5 = arrayList8;
                                        z10 = true;
                                    } else {
                                        if (E2.startsWith("#EXT-X-RENDITION-REPORT")) {
                                            long i23 = i(E2, X);
                                            Matcher matcher = Y.matcher(E2);
                                            if (matcher.find()) {
                                                String group = matcher.group(1);
                                                group.getClass();
                                                i5 = Integer.parseInt(group);
                                            } else {
                                                i5 = -1;
                                            }
                                            e eVar = new e(Uri.parse(ke.b.J(str, k(E2, pattern2, hashMap))), i23, i5);
                                            arrayList2 = arrayList9;
                                            arrayList2.add(eVar);
                                        } else {
                                            arrayList2 = arrayList9;
                                            if (!E2.startsWith("#EXT-X-PRELOAD-HINT")) {
                                                nc.i iVar10 = iVar8;
                                                f fVar7 = fVar3;
                                                if (E2.startsWith("#EXT-X-PART")) {
                                                    String hexString = str7 == null ? null : str12 != null ? str12 : Long.toHexString(j13);
                                                    String k11 = k(E2, pattern2, hashMap);
                                                    long parseDouble2 = (long) (Double.parseDouble(k(E2, K, Collections.EMPTY_MAP)) * 1000000.0d);
                                                    boolean g10 = g(E2, f18348t0) | (z7 && arrayList8.isEmpty());
                                                    boolean g11 = g(E2, f18349u0);
                                                    String j34 = j(E2, pattern, null, hashMap);
                                                    if (j34 != null) {
                                                        int i24 = d0.a;
                                                        String[] split3 = j34.split("@", -1);
                                                        long parseLong = Long.parseLong(split3[0]);
                                                        if (split3.length > 1) {
                                                            j17 = Long.parseLong(split3[1]);
                                                        }
                                                        j7 = parseLong;
                                                    } else {
                                                        j7 = -1;
                                                    }
                                                    long j35 = j7 == -1 ? 0L : j17;
                                                    if (iVar7 != null || treeMap.isEmpty()) {
                                                        iVar3 = iVar7;
                                                    } else {
                                                        nc.h[] hVarArr = (nc.h[]) treeMap.values().toArray(new nc.h[0]);
                                                        nc.i iVar11 = new nc.i(str3, true, hVarArr);
                                                        if (iVar10 == null) {
                                                            iVar10 = b(str3, hVarArr);
                                                        }
                                                        iVar3 = iVar11;
                                                    }
                                                    long j36 = j11;
                                                    arrayList8.add(new d(k11, fVar7, parseDouble2, i11, j36, iVar3, str7, hexString, j35, j7, g11, g10, false));
                                                    j11 = j36 + parseDouble2;
                                                    if (j7 != -1) {
                                                        j35 += j7;
                                                    }
                                                    j17 = j35;
                                                    iVar8 = iVar10;
                                                    fVar3 = fVar7;
                                                    arrayList5 = arrayList8;
                                                    str9 = str3;
                                                    iVar7 = iVar3;
                                                    hVar2 = hVar;
                                                    z8 = z14;
                                                    str8 = str12;
                                                    arrayList7 = arrayList;
                                                    i12 = 0;
                                                    iVar6 = iVar;
                                                    arrayList6 = arrayList2;
                                                    lVar2 = lVar;
                                                } else {
                                                    fVar = fVar7;
                                                    j = j11;
                                                    arrayList3 = arrayList8;
                                                    if (E2.startsWith("#")) {
                                                        iVar8 = iVar10;
                                                        str2 = str7;
                                                        j5 = j18;
                                                        z5 = z13;
                                                        str4 = str6;
                                                        iVar6 = iVar;
                                                        fVar3 = fVar;
                                                        arrayList5 = arrayList3;
                                                        str9 = str3;
                                                        str6 = str4;
                                                        j11 = j;
                                                        str7 = str2;
                                                        j18 = j5;
                                                        z13 = z5;
                                                        hVar2 = hVar;
                                                        z8 = z14;
                                                        str8 = str12;
                                                        arrayList7 = arrayList;
                                                        i12 = 0;
                                                        arrayList6 = arrayList2;
                                                        lVar2 = lVar;
                                                    } else {
                                                        String hexString2 = str7 == null ? null : str12 != null ? str12 : Long.toHexString(j13);
                                                        long j37 = j13 + 1;
                                                        String l6 = l(E2, hashMap);
                                                        f fVar8 = (f) hashMap2.get(l6);
                                                        if (j18 == -1) {
                                                            fVar2 = fVar8;
                                                            j14 = 0;
                                                        } else {
                                                            if (z12 && fVar == null && fVar8 == null) {
                                                                fVar8 = new f(0L, j14, l6, null, null);
                                                                hashMap2.put(l6, fVar8);
                                                            }
                                                            fVar2 = fVar8;
                                                        }
                                                        if (iVar7 != null || treeMap.isEmpty()) {
                                                            iVar4 = iVar10;
                                                            str5 = l6;
                                                        } else {
                                                            iVar4 = iVar10;
                                                            str5 = l6;
                                                            nc.h[] hVarArr2 = (nc.h[]) treeMap.values().toArray(new nc.h[0]);
                                                            nc.i iVar12 = new nc.i(str3, true, hVarArr2);
                                                            if (iVar4 == null) {
                                                                iVar5 = b(str3, hVarArr2);
                                                                iVar7 = iVar12;
                                                                int i25 = i11;
                                                                String str17 = str7;
                                                                long j38 = j18;
                                                                long j39 = j14;
                                                                long j40 = j15;
                                                                long j41 = j16;
                                                                nc.i iVar13 = iVar7;
                                                                i11 = i25;
                                                                arrayList4.add(new f(str5, fVar == null ? fVar : fVar2, str6, j41, i25, j40, iVar13, str17, hexString2, j39, j38, z13, arrayList3));
                                                                j11 = j40 + j41;
                                                                ArrayList arrayList11 = new ArrayList();
                                                                j14 = j18 == -1 ? j39 + j38 : j39;
                                                                arrayList6 = arrayList2;
                                                                iVar8 = iVar5;
                                                                fVar3 = fVar;
                                                                j13 = j37;
                                                                str9 = str3;
                                                                str6 = "";
                                                                j15 = j11;
                                                                iVar7 = iVar13;
                                                                str7 = str17;
                                                                j16 = 0;
                                                                j18 = -1;
                                                                hVar2 = hVar;
                                                                str8 = str12;
                                                                arrayList7 = arrayList;
                                                                i12 = 0;
                                                                z13 = false;
                                                                lVar2 = lVar;
                                                                iVar6 = iVar;
                                                                arrayList5 = arrayList11;
                                                                z8 = z14;
                                                            } else {
                                                                iVar7 = iVar12;
                                                            }
                                                        }
                                                        iVar5 = iVar4;
                                                        int i252 = i11;
                                                        String str172 = str7;
                                                        long j382 = j18;
                                                        long j392 = j14;
                                                        long j402 = j15;
                                                        long j412 = j16;
                                                        nc.i iVar132 = iVar7;
                                                        i11 = i252;
                                                        arrayList4.add(new f(str5, fVar == null ? fVar : fVar2, str6, j412, i252, j402, iVar132, str172, hexString2, j392, j382, z13, arrayList3));
                                                        j11 = j402 + j412;
                                                        ArrayList arrayList112 = new ArrayList();
                                                        if (j18 == -1) {
                                                        }
                                                        arrayList6 = arrayList2;
                                                        iVar8 = iVar5;
                                                        fVar3 = fVar;
                                                        j13 = j37;
                                                        str9 = str3;
                                                        str6 = "";
                                                        j15 = j11;
                                                        iVar7 = iVar132;
                                                        str7 = str172;
                                                        j16 = 0;
                                                        j18 = -1;
                                                        hVar2 = hVar;
                                                        str8 = str12;
                                                        arrayList7 = arrayList;
                                                        i12 = 0;
                                                        z13 = false;
                                                        lVar2 = lVar;
                                                        iVar6 = iVar;
                                                        arrayList5 = arrayList112;
                                                        z8 = z14;
                                                    }
                                                }
                                            } else if (dVar == null && "PART".equals(k(E2, f18339k0, hashMap))) {
                                                nc.i iVar14 = iVar8;
                                                f fVar9 = fVar3;
                                                String k12 = k(E2, pattern2, hashMap);
                                                long i26 = i(E2, f18331c0);
                                                long i27 = i(E2, f18332d0);
                                                String hexString3 = str7 == null ? null : str12 != null ? str12 : Long.toHexString(j13);
                                                if (iVar7 != null || treeMap.isEmpty()) {
                                                    iVar2 = iVar7;
                                                } else {
                                                    nc.h[] hVarArr3 = (nc.h[]) treeMap.values().toArray(new nc.h[i12]);
                                                    nc.i iVar15 = new nc.i(str3, true, hVarArr3);
                                                    if (iVar14 == null) {
                                                        iVar14 = b(str3, hVarArr3);
                                                    }
                                                    iVar2 = iVar15;
                                                }
                                                if (i26 == -1 || i27 != -1) {
                                                    long j42 = j11;
                                                    j11 = j42;
                                                    dVar = new d(k12, fVar9, 0L, i11, j42, iVar2, str7, hexString3, i26 != -1 ? i26 : 0L, i27, false, false, true);
                                                }
                                                arrayList6 = arrayList2;
                                                str9 = str3;
                                                fVar3 = fVar9;
                                                iVar7 = iVar2;
                                                hVar2 = hVar;
                                                z8 = z14;
                                                str8 = str12;
                                                arrayList7 = arrayList;
                                                arrayList5 = arrayList8;
                                                i12 = 0;
                                                lVar2 = lVar;
                                                iVar8 = iVar14;
                                                iVar6 = iVar;
                                            }
                                        }
                                        fVar = fVar3;
                                        j = j11;
                                        str2 = str7;
                                        j5 = j18;
                                        z5 = z13;
                                        str4 = str6;
                                        arrayList3 = arrayList8;
                                        iVar6 = iVar;
                                        fVar3 = fVar;
                                        arrayList5 = arrayList3;
                                        str9 = str3;
                                        str6 = str4;
                                        j11 = j;
                                        str7 = str2;
                                        j18 = j5;
                                        z13 = z5;
                                        hVar2 = hVar;
                                        z8 = z14;
                                        str8 = str12;
                                        arrayList7 = arrayList;
                                        i12 = 0;
                                        arrayList6 = arrayList2;
                                        lVar2 = lVar;
                                    }
                                    lVar2 = lVar;
                                    iVar6 = iVar;
                                    str9 = str3;
                                }
                                z5 = z13;
                                str4 = str6;
                                arrayList2 = arrayList9;
                                arrayList3 = arrayList8;
                                iVar6 = iVar;
                                fVar3 = fVar;
                                arrayList5 = arrayList3;
                                str9 = str3;
                                str6 = str4;
                                j11 = j;
                                str7 = str2;
                                j18 = j5;
                                z13 = z5;
                                hVar2 = hVar;
                                z8 = z14;
                                str8 = str12;
                                arrayList7 = arrayList;
                                i12 = 0;
                                arrayList6 = arrayList2;
                                lVar2 = lVar;
                            }
                            hVar2 = hVar;
                            z8 = z14;
                            str8 = str12;
                            arrayList7 = arrayList;
                            arrayList6 = arrayList9;
                            arrayList5 = arrayList8;
                        }
                    }
                }
                arrayList7 = arrayList;
                hVar2 = hVar;
            }
        }
        boolean z15 = z8;
        ArrayList arrayList12 = arrayList6;
        ArrayList arrayList13 = arrayList7;
        h hVar3 = hVar2;
        ArrayList arrayList14 = arrayList5;
        HashMap hashMap3 = new HashMap();
        for (int i28 = 0; i28 < arrayList12.size(); i28++) {
            e eVar2 = (e) arrayList12.get(i28);
            long j43 = eVar2.f18282b;
            if (j43 == -1) {
                j43 = (j21 + arrayList4.size()) - (arrayList14.isEmpty() ? 1L : 0L);
            }
            int i29 = eVar2.f18283c;
            if (i29 == -1 && j20 != -9223372036854775807L) {
                i29 = (arrayList14.isEmpty() ? ((f) fi.p.i(arrayList4)).J : arrayList14).size() - 1;
            }
            Uri uri = eVar2.a;
            hashMap3.put(uri, new e(uri, j43, i29));
        }
        if (dVar != null) {
            arrayList14.add(dVar);
        }
        return new i(i10, str, arrayList13, j10, z15, j12, z11, i13, j21, i14, j19, j20, z7, z10, j12 != 0, iVar8, arrayList4, arrayList14, hVar3, hashMap3);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Multi-variable type inference failed */
    public static l e(r rVar, String str) {
        ArrayList arrayList;
        int i5;
        char c6;
        ArrayList arrayList2;
        k kVar;
        String str2;
        ArrayList arrayList3;
        int parseInt;
        String str3;
        k kVar2;
        String str4;
        k kVar3;
        ArrayList arrayList4;
        int i6;
        ArrayList arrayList5;
        ArrayList arrayList6;
        int i10;
        int i11;
        ArrayList arrayList7;
        ArrayList arrayList8;
        Uri K2;
        int i12;
        String str5 = str;
        HashMap hashMap = new HashMap();
        HashMap hashMap2 = new HashMap();
        ArrayList arrayList9 = new ArrayList();
        ArrayList arrayList10 = new ArrayList();
        ArrayList arrayList11 = new ArrayList();
        ArrayList arrayList12 = new ArrayList();
        ArrayList arrayList13 = new ArrayList();
        ArrayList arrayList14 = new ArrayList();
        ArrayList arrayList15 = new ArrayList();
        ArrayList arrayList16 = new ArrayList();
        boolean z5 = false;
        boolean z6 = false;
        while (true) {
            boolean y5 = rVar.y();
            Pattern pattern = h0;
            ArrayList arrayList17 = arrayList13;
            Pattern pattern2 = f18341m0;
            boolean z7 = z5;
            if (!y5) {
                ArrayList arrayList18 = arrayList14;
                ArrayList arrayList19 = arrayList10;
                ArrayList arrayList20 = arrayList11;
                ArrayList arrayList21 = arrayList12;
                ArrayList arrayList22 = arrayList16;
                ArrayList arrayList23 = arrayList15;
                boolean z8 = z6;
                ArrayList arrayList24 = new ArrayList();
                HashSet hashSet = new HashSet();
                for (int i13 = 0; i13 < arrayList9.size(); i13++) {
                    k kVar4 = (k) arrayList9.get(i13);
                    Uri uri = kVar4.a;
                    Format format = kVar4.f18314b;
                    if (hashSet.add(uri)) {
                        ke.b.k(format.G == null);
                        ArrayList arrayList25 = (ArrayList) hashMap.get(kVar4.a);
                        arrayList25.getClass();
                        Metadata metadata = new Metadata(new w(null, null, arrayList25));
                        f0 a = format.a();
                        a.f9677i = metadata;
                        arrayList24.add(new k(kVar4.a, new Format(a), kVar4.f18315c, kVar4.f18316d, kVar4.f18317e, kVar4.f18318f));
                    }
                }
                int i14 = 0;
                Format format2 = null;
                List list = null;
                while (i14 < arrayList18.size()) {
                    ArrayList arrayList26 = arrayList18;
                    String str6 = (String) arrayList26.get(i14);
                    String k = k(str6, f18342n0, hashMap2);
                    String k5 = k(str6, pattern2, hashMap2);
                    f0 f0Var = new f0();
                    f0Var.a = k0.d.l(k, ":", k5);
                    f0Var.f9670b = k5;
                    f0Var.j = "application/x-mpegURL";
                    boolean g6 = g(str6, f18346r0);
                    int i15 = i14;
                    boolean z10 = g6;
                    if (g(str6, f18347s0)) {
                        z10 = (g6 ? 1 : 0) | 2;
                    }
                    int i16 = z10;
                    if (g(str6, f18345q0)) {
                        i16 = (z10 ? 1 : 0) | 4;
                    }
                    f0Var.f9672d = i16;
                    String j = j(str6, f18343o0, null, hashMap2);
                    if (TextUtils.isEmpty(j)) {
                        arrayList = arrayList24;
                        i5 = 0;
                    } else {
                        int i17 = d0.a;
                        arrayList = arrayList24;
                        String[] split = j.split(",", -1);
                        i5 = d0.k(split, "public.accessibility.describes-video") ? IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING : 0;
                        if (d0.k(split, "public.accessibility.transcribes-spoken-dialog")) {
                            i5 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        }
                        if (d0.k(split, "public.accessibility.describes-music-and-sound")) {
                            i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        }
                        if (d0.k(split, "public.easy-to-read")) {
                            i5 |= 8192;
                        }
                    }
                    f0Var.f9673e = i5;
                    f0Var.f9671c = j(str6, f18340l0, null, hashMap2);
                    String j5 = j(str6, pattern, null, hashMap2);
                    Uri K3 = j5 == null ? null : ke.b.K(str5, j5);
                    arrayList18 = arrayList26;
                    Metadata metadata2 = new Metadata(new w(k, k5, Collections.EMPTY_LIST));
                    String k7 = k(str6, f18338j0, hashMap2);
                    switch (k7.hashCode()) {
                        case -959297733:
                            if (k7.equals("SUBTITLES")) {
                                c6 = 0;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -333210994:
                            if (k7.equals("CLOSED-CAPTIONS")) {
                                c6 = 1;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 62628790:
                            if (k7.equals("AUDIO")) {
                                c6 = 2;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 81665115:
                            if (k7.equals("VIDEO")) {
                                c6 = 3;
                                break;
                            }
                            c6 = 65535;
                            break;
                        default:
                            c6 = 65535;
                            break;
                    }
                    switch (c6) {
                        case 0:
                            arrayList2 = arrayList20;
                            int i18 = 0;
                            while (true) {
                                if (i18 < arrayList9.size()) {
                                    kVar = (k) arrayList9.get(i18);
                                    if (!k.equals(kVar.f18317e)) {
                                        i18++;
                                    }
                                } else {
                                    kVar = null;
                                }
                            }
                            if (kVar != null) {
                                String q5 = d0.q(3, kVar.f18314b.F);
                                f0Var.f9676h = q5;
                                str2 = ke.o.d(q5);
                            } else {
                                str2 = null;
                            }
                            if (str2 == null) {
                                str2 = "text/vtt";
                            }
                            f0Var.k = str2;
                            f0Var.f9677i = metadata2;
                            if (K3 != null) {
                                arrayList3 = arrayList21;
                                arrayList3.add(new j(K3, new Format(f0Var), k5));
                                break;
                            } else {
                                arrayList3 = arrayList21;
                                ke.b.N("HlsPlaylistParser", "EXT-X-MEDIA tag with missing mandatory URI attribute: skipping");
                                break;
                            }
                        case 1:
                            arrayList2 = arrayList20;
                            String k10 = k(str6, f18344p0, hashMap2);
                            if (k10.startsWith("CC")) {
                                parseInt = Integer.parseInt(k10.substring(2));
                                str3 = "application/cea-608";
                            } else {
                                parseInt = Integer.parseInt(k10.substring(7));
                                str3 = "application/cea-708";
                            }
                            if (list == null) {
                                list = new ArrayList();
                            }
                            f0Var.k = str3;
                            f0Var.C = parseInt;
                            list.add(new Format(f0Var));
                            arrayList3 = arrayList21;
                            break;
                        case 2:
                            ArrayList arrayList27 = arrayList19;
                            int i19 = 0;
                            while (true) {
                                if (i19 < arrayList9.size()) {
                                    kVar2 = (k) arrayList9.get(i19);
                                    int i20 = i19;
                                    if (!k.equals(kVar2.f18316d)) {
                                        i19 = i20 + 1;
                                    }
                                } else {
                                    kVar2 = null;
                                }
                            }
                            if (kVar2 != null) {
                                String q6 = d0.q(1, kVar2.f18314b.F);
                                f0Var.f9676h = q6;
                                str4 = ke.o.d(q6);
                            } else {
                                str4 = null;
                            }
                            arrayList19 = arrayList27;
                            String j7 = j(str6, F, null, hashMap2);
                            if (j7 != null) {
                                int i21 = d0.a;
                                f0Var.f9690x = Integer.parseInt(j7.split("/", 2)[0]);
                                if ("audio/eac3".equals(str4) && j7.endsWith("/JOC")) {
                                    f0Var.f9676h = "ec+3";
                                    str4 = "audio/eac3-joc";
                                }
                            }
                            f0Var.k = str4;
                            if (K3 != null) {
                                f0Var.f9677i = metadata2;
                                arrayList2 = arrayList20;
                                arrayList2.add(new j(K3, new Format(f0Var), k5));
                            } else {
                                arrayList2 = arrayList20;
                                if (kVar2 != null) {
                                    format2 = new Format(f0Var);
                                }
                            }
                            arrayList3 = arrayList21;
                            break;
                        case 3:
                            int i22 = 0;
                            while (true) {
                                if (i22 < arrayList9.size()) {
                                    kVar3 = (k) arrayList9.get(i22);
                                    if (!k.equals(kVar3.f18315c)) {
                                        i22++;
                                    }
                                } else {
                                    kVar3 = null;
                                }
                            }
                            if (kVar3 != null) {
                                Format format3 = kVar3.f18314b;
                                String q7 = d0.q(2, format3.F);
                                f0Var.f9676h = q7;
                                f0Var.k = ke.o.d(q7);
                                f0Var.f9682p = format3.N;
                                f0Var.f9683q = format3.O;
                                f0Var.f9684r = format3.P;
                            }
                            if (K3 != null) {
                                f0Var.f9677i = metadata2;
                                arrayList19.add(new j(K3, new Format(f0Var), k5));
                            }
                        default:
                            arrayList3 = arrayList21;
                            arrayList2 = arrayList20;
                            break;
                    }
                    i14 = i15 + 1;
                    arrayList24 = arrayList;
                    str5 = str;
                    arrayList20 = arrayList2;
                    arrayList21 = arrayList3;
                }
                ArrayList arrayList28 = arrayList24;
                ArrayList arrayList29 = arrayList21;
                ArrayList arrayList30 = arrayList20;
                if (z7) {
                    list = Collections.EMPTY_LIST;
                }
                return new l(str, arrayList22, arrayList28, arrayList19, arrayList30, arrayList29, arrayList17, format2, list, z8, hashMap2, arrayList23);
            }
            String E2 = rVar.E();
            if (E2.startsWith("#EXT")) {
                arrayList16.add(E2);
            }
            boolean startsWith = E2.startsWith("#EXT-X-I-FRAME-STREAM-INF");
            ArrayList arrayList31 = arrayList16;
            if (E2.startsWith("#EXT-X-DEFINE")) {
                hashMap2.put(k(E2, pattern2, hashMap2), k(E2, f18353w0, hashMap2));
            } else {
                if (E2.equals("#EXT-X-INDEPENDENT-SEGMENTS")) {
                    arrayList8 = arrayList14;
                    arrayList7 = arrayList10;
                    arrayList6 = arrayList11;
                    arrayList5 = arrayList12;
                    arrayList4 = arrayList15;
                    z5 = z7;
                    z6 = true;
                } else if (E2.startsWith("#EXT-X-MEDIA")) {
                    arrayList14.add(E2);
                } else if (E2.startsWith("#EXT-X-SESSION-KEY")) {
                    nc.h c8 = c(E2, j(E2, f18334f0, InterpolationAnimatedNode.EXTRAPOLATE_TYPE_IDENTITY, hashMap2), hashMap2);
                    if (c8 != null) {
                        String k11 = k(E2, f18333e0, hashMap2);
                        arrayList15.add(new nc.i(("SAMPLE-AES-CENC".equals(k11) || "SAMPLE-AES-CTR".equals(k11)) ? "cenc" : "cbcs", true, c8));
                    }
                } else if (E2.startsWith("#EXT-X-STREAM-INF") || startsWith) {
                    boolean contains = z7 | E2.contains("CLOSED-CAPTIONS=NONE");
                    int i23 = startsWith ? 16384 : 0;
                    int parseInt2 = Integer.parseInt(k(E2, E, Collections.EMPTY_MAP));
                    Matcher matcher = f18336i.matcher(E2);
                    if (matcher.find()) {
                        arrayList4 = arrayList15;
                        String group = matcher.group(1);
                        group.getClass();
                        i6 = Integer.parseInt(group);
                    } else {
                        arrayList4 = arrayList15;
                        i6 = -1;
                    }
                    boolean z11 = z6;
                    String j10 = j(E2, G, null, hashMap2);
                    arrayList5 = arrayList12;
                    String j11 = j(E2, H, null, hashMap2);
                    if (j11 != null) {
                        int i24 = d0.a;
                        arrayList6 = arrayList11;
                        String[] split2 = j11.split("x", -1);
                        int parseInt3 = Integer.parseInt(split2[0]);
                        i11 = Integer.parseInt(split2[1]);
                        if (parseInt3 <= 0 || i11 <= 0) {
                            i11 = -1;
                            i12 = -1;
                        } else {
                            i12 = parseInt3;
                        }
                        i10 = i12;
                    } else {
                        arrayList6 = arrayList11;
                        i10 = -1;
                        i11 = -1;
                    }
                    arrayList7 = arrayList10;
                    String j12 = j(E2, I, null, hashMap2);
                    float parseFloat = j12 != null ? Float.parseFloat(j12) : -1.0f;
                    arrayList8 = arrayList14;
                    String j13 = j(E2, f18350v, null, hashMap2);
                    String j14 = j(E2, f18352w, null, hashMap2);
                    String j15 = j(E2, f18354x, null, hashMap2);
                    String j16 = j(E2, f18356y, null, hashMap2);
                    if (startsWith) {
                        K2 = ke.b.K(str5, k(E2, pattern, hashMap2));
                    } else {
                        if (!rVar.y()) {
                            throw g1.b("#EXT-X-STREAM-INF must be followed by another line", null);
                        }
                        K2 = ke.b.K(str5, l(rVar.E(), hashMap2));
                    }
                    Uri uri2 = K2;
                    f0 f0Var2 = new f0();
                    f0Var2.a = Integer.toString(arrayList9.size());
                    f0Var2.j = "application/x-mpegURL";
                    f0Var2.f9676h = j10;
                    f0Var2.f9674f = i6;
                    f0Var2.f9675g = parseInt2;
                    f0Var2.f9682p = i10;
                    f0Var2.f9683q = i11;
                    f0Var2.f9684r = parseFloat;
                    f0Var2.f9673e = i23;
                    arrayList9.add(new k(uri2, new Format(f0Var2), j13, j14, j15, j16));
                    ArrayList arrayList32 = (ArrayList) hashMap.get(uri2);
                    if (arrayList32 == null) {
                        arrayList32 = new ArrayList();
                        hashMap.put(uri2, arrayList32);
                    }
                    arrayList32.add(new v(i6, parseInt2, j13, j14, j15, j16));
                    z5 = contains;
                    z6 = z11;
                }
                arrayList13 = arrayList17;
                arrayList16 = arrayList31;
                arrayList15 = arrayList4;
                arrayList12 = arrayList5;
                arrayList11 = arrayList6;
                arrayList10 = arrayList7;
                arrayList14 = arrayList8;
            }
            arrayList8 = arrayList14;
            arrayList7 = arrayList10;
            arrayList6 = arrayList11;
            arrayList5 = arrayList12;
            arrayList4 = arrayList15;
            z5 = z7;
            arrayList13 = arrayList17;
            arrayList16 = arrayList31;
            arrayList15 = arrayList4;
            arrayList12 = arrayList5;
            arrayList11 = arrayList6;
            arrayList10 = arrayList7;
            arrayList14 = arrayList8;
        }
    }

    public static boolean g(String str, Pattern pattern) {
        Matcher matcher = pattern.matcher(str);
        if (matcher.find()) {
            return "YES".equals(matcher.group(1));
        }
        return false;
    }

    public static double h(String str, Pattern pattern) {
        Matcher matcher = pattern.matcher(str);
        if (!matcher.find()) {
            return -9.223372036854776E18d;
        }
        String group = matcher.group(1);
        group.getClass();
        return Double.parseDouble(group);
    }

    public static long i(String str, Pattern pattern) {
        Matcher matcher = pattern.matcher(str);
        if (!matcher.find()) {
            return -1L;
        }
        String group = matcher.group(1);
        group.getClass();
        return Long.parseLong(group);
    }

    public static String j(String str, Pattern pattern, String str2, Map map) {
        Matcher matcher = pattern.matcher(str);
        if (matcher.find()) {
            str2 = matcher.group(1);
            str2.getClass();
        }
        return (map.isEmpty() || str2 == null) ? str2 : l(str2, map);
    }

    public static String k(String str, Pattern pattern, Map map) {
        String j = j(str, pattern, null, map);
        if (j != null) {
            return j;
        }
        throw g1.b("Couldn't match " + pattern.pattern() + " in " + str, null);
    }

    public static String l(String str, Map map) {
        Matcher matcher = f18357y0.matcher(str);
        StringBuffer stringBuffer = new StringBuffer();
        while (matcher.find()) {
            String group = matcher.group(1);
            if (map.containsKey(group)) {
                matcher.appendReplacement(stringBuffer, Matcher.quoteReplacement((String) map.get(group)));
            }
        }
        matcher.appendTail(stringBuffer);
        return stringBuffer.toString();
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x0069 A[Catch: all -> 0x0096, LOOP:0: B:13:0x0069->B:38:0x0069, LOOP_START, TryCatch #0 {all -> 0x0096, blocks: (B:3:0x000f, B:5:0x0018, B:7:0x0020, B:10:0x0029, B:13:0x0069, B:15:0x006f, B:18:0x007a, B:53:0x0082, B:20:0x0098, B:22:0x00a0, B:24:0x00a8, B:26:0x00b0, B:28:0x00b8, B:30:0x00c0, B:32:0x00c8, B:34:0x00d0, B:36:0x00d9, B:41:0x00dd, B:62:0x00ff, B:63:0x0105, B:67:0x0030, B:69:0x0036, B:74:0x003f, B:76:0x0048, B:81:0x0051, B:83:0x0057, B:85:0x005d, B:87:0x0062), top: B:2:0x000f }] */
    /* JADX WARN: Removed duplicated region for block: B:62:0x00ff A[Catch: all -> 0x0096, TRY_ENTER, TryCatch #0 {all -> 0x0096, blocks: (B:3:0x000f, B:5:0x0018, B:7:0x0020, B:10:0x0029, B:13:0x0069, B:15:0x006f, B:18:0x007a, B:53:0x0082, B:20:0x0098, B:22:0x00a0, B:24:0x00a8, B:26:0x00b0, B:28:0x00b8, B:30:0x00c0, B:32:0x00c8, B:34:0x00d0, B:36:0x00d9, B:41:0x00dd, B:62:0x00ff, B:63:0x0105, B:67:0x0030, B:69:0x0036, B:74:0x003f, B:76:0x0048, B:81:0x0051, B:83:0x0057, B:85:0x005d, B:87:0x0062), top: B:2:0x000f }] */
    @Override // ie.m0
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object f(Uri uri, ie.n nVar) {
        String trim;
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(nVar));
        ArrayDeque arrayDeque = new ArrayDeque();
        try {
            int read = bufferedReader.read();
            boolean z5 = false;
            if (read == 239) {
                if (bufferedReader.read() == 187 && bufferedReader.read() == 191) {
                    read = bufferedReader.read();
                }
                if (z5) {
                    throw g1.b("Input does not start with the #EXTM3U header.", null);
                }
                while (true) {
                    String readLine = bufferedReader.readLine();
                    if (readLine == null) {
                        d0.g(bufferedReader);
                        throw g1.b("Failed to parse the playlist, could not identify any tags.", null);
                    }
                    trim = readLine.trim();
                    if (!trim.isEmpty()) {
                        if (!trim.startsWith("#EXT-X-STREAM-INF")) {
                            if (trim.startsWith("#EXT-X-TARGETDURATION") || trim.startsWith("#EXT-X-MEDIA-SEQUENCE") || trim.startsWith("#EXTINF") || trim.startsWith("#EXT-X-KEY") || trim.startsWith("#EXT-X-BYTERANGE") || trim.equals("#EXT-X-DISCONTINUITY") || trim.equals("#EXT-X-DISCONTINUITY-SEQUENCE") || trim.equals("#EXT-X-ENDLIST")) {
                                break;
                            }
                            arrayDeque.add(trim);
                        } else {
                            arrayDeque.add(trim);
                            return e(new r(arrayDeque, bufferedReader), uri.toString());
                        }
                    }
                }
                arrayDeque.add(trim);
                return d(this.f18358d, this.f18359e, new r(arrayDeque, bufferedReader), uri.toString());
            }
            while (read != -1 && Character.isWhitespace(read)) {
                read = bufferedReader.read();
            }
            int i5 = 0;
            while (true) {
                if (i5 >= 7) {
                    while (read != -1 && Character.isWhitespace(read) && !d0.G(read)) {
                        read = bufferedReader.read();
                    }
                    z5 = d0.G(read);
                } else {
                    if (read != "#EXTM3U".charAt(i5)) {
                        break;
                    }
                    read = bufferedReader.read();
                    i5++;
                }
            }
            if (z5) {
            }
        } finally {
            d0.g(bufferedReader);
        }
    }
}
