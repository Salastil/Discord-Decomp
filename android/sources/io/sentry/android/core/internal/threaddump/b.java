package io.sentry.android.core.internal.threaddump;

import a5.g;
import ha.l;
import io.sentry.SentryLevel;
import io.sentry.protocol.DebugImage;
import io.sentry.protocol.SentryStackFrame;
import io.sentry.protocol.a0;
import io.sentry.protocol.c0;
import io.sentry.v5;
import io.sentry.w4;
import java.math.BigInteger;
import java.nio.BufferUnderflowException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import k0.d;

/* loaded from: classes3.dex */
public final class b {

    /* renamed from: f, reason: collision with root package name */
    public static final Pattern f11185f = Pattern.compile("\"(.*)\" (.*) ?prio=(\\d+)\\s+tid=(\\d+)\\s*(.*)");

    /* renamed from: g, reason: collision with root package name */
    public static final Pattern f11186g = Pattern.compile("\"(.*)\" (.*) ?sysTid=(\\d+)");

    /* renamed from: h, reason: collision with root package name */
    public static final Pattern f11187h = Pattern.compile(" *(?:native: )?#(\\d+) \\S+ ([0-9a-fA-F]+)\\s+((.*?)(?:\\s+\\(deleted\\))?(?:\\s+\\(offset (.*?)\\))?)(?:\\s+\\((?:\\?\\?\\?|(.*?)(?:\\+(\\d+))?)\\))?(?:\\s+\\(BuildId: (.*?)\\))?");

    /* renamed from: i, reason: collision with root package name */
    public static final Pattern f11188i = Pattern.compile(" *at (?:(.+)\\.)?([^.]+)\\.([^.]+)\\((.*):([\\d-]+)\\)");
    public static final Pattern j = Pattern.compile(" *at (?:(.+)\\.)?([^.]+)\\.([^.]+)\\(Native method\\)");
    public static final Pattern k = Pattern.compile(" *- locked \\<([0x0-9a-fA-F]{1,16})\\> \\(a (?:(.+)\\.)?([^.]+)\\)");

    /* renamed from: l, reason: collision with root package name */
    public static final Pattern f11189l = Pattern.compile(" *- sleeping on \\<([0x0-9a-fA-F]{1,16})\\> \\(a (?:(.+)\\.)?([^.]+)\\)");

    /* renamed from: m, reason: collision with root package name */
    public static final Pattern f11190m = Pattern.compile(" *- waiting on \\<([0x0-9a-fA-F]{1,16})\\> \\(a (?:(.+)\\.)?([^.]+)\\)");

    /* renamed from: n, reason: collision with root package name */
    public static final Pattern f11191n = Pattern.compile(" *- waiting to lock \\<([0x0-9a-fA-F]{1,16})\\> \\(a (?:(.+)\\.)?([^.]+)\\)");

    /* renamed from: o, reason: collision with root package name */
    public static final Pattern f11192o = Pattern.compile(" *- waiting to lock \\<([0x0-9a-fA-F]{1,16})\\> \\(a (?:(.+)\\.)?([^.]+)\\)(?: held by thread (\\d+))");

    /* renamed from: p, reason: collision with root package name */
    public static final Pattern f11193p = Pattern.compile(" *- waiting to lock an unknown object");

    /* renamed from: q, reason: collision with root package name */
    public static final Pattern f11194q = Pattern.compile("\\s+");
    public final v5 a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f11195b;

    /* renamed from: c, reason: collision with root package name */
    public final l f11196c;

    /* renamed from: d, reason: collision with root package name */
    public final HashMap f11197d = new HashMap();

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f11198e = new ArrayList();

    public b(v5 v5Var, boolean z5) {
        this.a = v5Var;
        this.f11195b = z5;
        this.f11196c = new l(v5Var);
    }

    public static void a(c0 c0Var, w4 w4Var) {
        Map map = c0Var.G;
        if (map == null) {
            map = new HashMap();
        }
        w4 w4Var2 = (w4) map.get(w4Var.f12069e);
        if (w4Var2 != null) {
            w4Var2.f12068d = Math.max(w4Var2.f12068d, w4Var.f12068d);
        } else {
            String str = w4Var.f12069e;
            w4 w4Var3 = new w4();
            w4Var3.f12068d = w4Var.f12068d;
            w4Var3.f12069e = str;
            w4Var3.f12070i = w4Var.f12070i;
            w4Var3.f12071v = w4Var.f12071v;
            w4Var3.f12072w = w4Var.f12072w;
            w4Var3.f12073x = ys.l.r(w4Var.f12073x);
            map.put(str, w4Var3);
        }
        c0Var.G = map;
    }

    public static Long b(Matcher matcher, int i5) {
        String group = matcher.group(i5);
        if (group == null || group.length() == 0) {
            return null;
        }
        return Long.valueOf(Long.parseLong(group));
    }

    public static boolean c(Matcher matcher, String str) {
        matcher.reset(str);
        return matcher.matches();
    }

    /* JADX WARN: Code restructure failed: missing block: B:50:0x01cf, code lost:
    
        if (r10 >= 0) goto L65;
     */
    /* JADX WARN: Removed duplicated region for block: B:118:0x043b  */
    /* JADX WARN: Removed duplicated region for block: B:120:0x0440 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:126:0x017e A[EDGE_INSN: B:126:0x017e->B:125:0x017e BREAK  A[LOOP:1: B:39:0x0168->B:54:0x041c], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00f4  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x016c  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x02a5  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x02d6  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void d(g gVar) {
        int i5;
        Pattern pattern;
        String str;
        Matcher matcher;
        Pattern pattern2;
        Matcher matcher2;
        String str2;
        Matcher matcher3;
        Matcher matcher4;
        Matcher matcher5;
        Matcher matcher6;
        Matcher matcher7;
        Matcher matcher8;
        Matcher matcher9;
        Matcher matcher10;
        Matcher matcher11;
        String format;
        Integer num;
        g gVar2 = gVar;
        int i6 = gVar2.f155d;
        Pattern pattern3 = f11185f;
        String str3 = "";
        Matcher matcher12 = pattern3.matcher("");
        Pattern pattern4 = f11186g;
        Matcher matcher13 = pattern4.matcher("");
        while (gVar2.f156e < i6) {
            a f2 = gVar2.f();
            String str4 = "Internal error while parsing thread dump.";
            v5 v5Var = this.a;
            if (f2 == null) {
                v5Var.getLogger().u(SentryLevel.WARNING, "Internal error while parsing thread dump.", new Object[0]);
                return;
            }
            String str5 = f2.a;
            if (c(matcher12, str5) || c(matcher13, str5)) {
                gVar2.f156e--;
                c0 c0Var = new c0();
                Matcher matcher14 = pattern3.matcher(str3);
                Matcher matcher15 = pattern4.matcher(str3);
                if (gVar2.f156e < i6) {
                    a f10 = gVar2.f();
                    if (f10 == null) {
                        v5Var.getLogger().u(SentryLevel.WARNING, "Internal error while parsing thread dump.", new Object[0]);
                    } else {
                        String str6 = f10.a;
                        if (c(matcher14, str6)) {
                            Long b10 = b(matcher14, 4);
                            if (b10 == null) {
                                v5Var.getLogger().u(SentryLevel.DEBUG, "No thread id in the dump, skipping thread.", new Object[0]);
                            } else {
                                c0Var.f11765d = b10;
                                c0Var.f11767i = matcher14.group(1);
                                String group = matcher14.group(5);
                                if (group != null) {
                                    if (group.contains(" ")) {
                                        c0Var.f11768v = group.substring(0, group.indexOf(32));
                                    } else {
                                        c0Var.f11768v = group;
                                    }
                                }
                                str2 = c0Var.f11767i;
                                if (str2 != null) {
                                    boolean equals = str2.equals("main");
                                    c0Var.E = Boolean.valueOf(equals);
                                    c0Var.f11769w = Boolean.valueOf(equals);
                                    c0Var.f11770x = Boolean.valueOf(equals && !this.f11195b);
                                }
                                ArrayList arrayList = new ArrayList();
                                Matcher matcher16 = f11187h.matcher(str3);
                                matcher3 = f11188i.matcher(str3);
                                Matcher matcher17 = j.matcher(str3);
                                Matcher matcher18 = k.matcher(str3);
                                pattern = pattern3;
                                Matcher matcher19 = f11190m.matcher(str3);
                                matcher = matcher12;
                                Matcher matcher20 = f11189l.matcher(str3);
                                pattern2 = pattern4;
                                Matcher matcher21 = f11192o.matcher(str3);
                                matcher2 = matcher13;
                                matcher4 = f11191n.matcher(str3);
                                matcher5 = f11193p.matcher(str3);
                                str = str3;
                                matcher6 = f11194q.matcher(str3);
                                SentryStackFrame sentryStackFrame = null;
                                while (true) {
                                    if (gVar2.f156e >= i6) {
                                        break;
                                    }
                                    a f11 = gVar2.f();
                                    if (f11 == null) {
                                        v5Var.getLogger().u(SentryLevel.WARNING, str4, new Object[0]);
                                        break;
                                    }
                                    String str7 = f11.a;
                                    boolean c6 = c(matcher3, str7);
                                    l lVar = this.f11196c;
                                    i5 = i6;
                                    String str8 = str4;
                                    if (c6) {
                                        sentryStackFrame = new SentryStackFrame();
                                        matcher7 = matcher4;
                                        String l6 = d.l(matcher3.group(1), ".", matcher3.group(2));
                                        sentryStackFrame.f11746x = l6;
                                        sentryStackFrame.f11745w = matcher3.group(3);
                                        sentryStackFrame.f11744v = matcher3.group(4);
                                        String group2 = matcher3.group(5);
                                        if (group2 != null && group2.length() != 0) {
                                            int parseInt = Integer.parseInt(group2);
                                            num = Integer.valueOf(parseInt);
                                        }
                                        num = null;
                                        sentryStackFrame.f11747y = num;
                                        sentryStackFrame.H = lVar.U(l6);
                                        arrayList.add(sentryStackFrame);
                                        matcher8 = matcher3;
                                    } else {
                                        matcher7 = matcher4;
                                        if (c(matcher16, str7)) {
                                            SentryStackFrame sentryStackFrame2 = new SentryStackFrame();
                                            sentryStackFrame2.I = matcher16.group(3);
                                            sentryStackFrame2.f11745w = matcher16.group(6);
                                            String group3 = matcher16.group(7);
                                            sentryStackFrame2.f11747y = (group3 == null || group3.length() == 0) ? null : Integer.valueOf(Integer.parseInt(group3));
                                            sentryStackFrame2.N = "0x" + matcher16.group(2);
                                            sentryStackFrame2.K = "native";
                                            String group4 = matcher16.group(8);
                                            if (group4 != null) {
                                                try {
                                                    ByteBuffer wrap = ByteBuffer.wrap(new BigInteger("10".concat(group4), 16).toByteArray());
                                                    wrap.get();
                                                    format = String.format("%08x-%04x-%04x-%04x-%04x%08x", Integer.valueOf(wrap.order(ByteOrder.LITTLE_ENDIAN).getInt()), Short.valueOf(wrap.getShort()), Short.valueOf(wrap.getShort()), Short.valueOf(wrap.order(ByteOrder.BIG_ENDIAN).getShort()), Short.valueOf(wrap.getShort()), Integer.valueOf(wrap.getInt()));
                                                } catch (NumberFormatException | BufferUnderflowException unused) {
                                                }
                                                if (format == null) {
                                                    HashMap hashMap = this.f11197d;
                                                    if (hashMap.containsKey(format)) {
                                                        matcher8 = matcher3;
                                                    } else {
                                                        DebugImage debugImage = new DebugImage();
                                                        debugImage.setDebugId(format);
                                                        debugImage.setType("elf");
                                                        matcher8 = matcher3;
                                                        debugImage.setCodeFile(matcher16.group(4));
                                                        debugImage.setCodeId(group4);
                                                        hashMap.put(format, debugImage);
                                                    }
                                                    sentryStackFrame2.O = "rel:".concat(format);
                                                } else {
                                                    matcher8 = matcher3;
                                                }
                                                arrayList.add(sentryStackFrame2);
                                                sentryStackFrame = null;
                                            }
                                            format = null;
                                            if (format == null) {
                                            }
                                            arrayList.add(sentryStackFrame2);
                                            sentryStackFrame = null;
                                        } else {
                                            matcher8 = matcher3;
                                            if (c(matcher17, str7)) {
                                                sentryStackFrame = new SentryStackFrame();
                                                String l7 = d.l(matcher17.group(1), ".", matcher17.group(2));
                                                sentryStackFrame.f11746x = l7;
                                                sentryStackFrame.f11745w = matcher17.group(3);
                                                sentryStackFrame.H = lVar.U(l7);
                                                sentryStackFrame.J = Boolean.TRUE;
                                                arrayList.add(sentryStackFrame);
                                            } else if (c(matcher18, str7)) {
                                                if (sentryStackFrame != null) {
                                                    w4 w4Var = new w4();
                                                    w4Var.f12068d = 1;
                                                    w4Var.f12069e = matcher18.group(1);
                                                    w4Var.f12070i = matcher18.group(2);
                                                    w4Var.f12071v = matcher18.group(3);
                                                    sentryStackFrame.S = w4Var;
                                                    a(c0Var, w4Var);
                                                }
                                            } else if (c(matcher19, str7)) {
                                                if (sentryStackFrame != null) {
                                                    w4 w4Var2 = new w4();
                                                    w4Var2.f12068d = 2;
                                                    w4Var2.f12069e = matcher19.group(1);
                                                    w4Var2.f12070i = matcher19.group(2);
                                                    w4Var2.f12071v = matcher19.group(3);
                                                    sentryStackFrame.S = w4Var2;
                                                    a(c0Var, w4Var2);
                                                }
                                            } else if (c(matcher20, str7)) {
                                                if (sentryStackFrame != null) {
                                                    w4 w4Var3 = new w4();
                                                    w4Var3.f12068d = 4;
                                                    w4Var3.f12069e = matcher20.group(1);
                                                    w4Var3.f12070i = matcher20.group(2);
                                                    w4Var3.f12071v = matcher20.group(3);
                                                    sentryStackFrame.S = w4Var3;
                                                    a(c0Var, w4Var3);
                                                }
                                            } else if (!c(matcher21, str7)) {
                                                matcher9 = matcher7;
                                                if (!c(matcher9, str7)) {
                                                    matcher10 = matcher5;
                                                    if (!c(matcher10, str7)) {
                                                        if (str7.length() == 0) {
                                                            break;
                                                        }
                                                        matcher11 = matcher6;
                                                        if (c(matcher11, str7)) {
                                                            break;
                                                        }
                                                        matcher5 = matcher10;
                                                        matcher6 = matcher11;
                                                        matcher3 = matcher8;
                                                        i6 = i5;
                                                        str4 = str8;
                                                        matcher4 = matcher9;
                                                        gVar2 = gVar;
                                                    } else if (sentryStackFrame != null) {
                                                        w4 w4Var4 = new w4();
                                                        w4Var4.f12068d = 8;
                                                        sentryStackFrame.S = w4Var4;
                                                        a(c0Var, w4Var4);
                                                    }
                                                } else {
                                                    if (sentryStackFrame != null) {
                                                        w4 w4Var5 = new w4();
                                                        w4Var5.f12068d = 8;
                                                        w4Var5.f12069e = matcher9.group(1);
                                                        w4Var5.f12070i = matcher9.group(2);
                                                        w4Var5.f12071v = matcher9.group(3);
                                                        sentryStackFrame.S = w4Var5;
                                                        a(c0Var, w4Var5);
                                                    }
                                                    matcher10 = matcher5;
                                                }
                                                matcher11 = matcher6;
                                                matcher5 = matcher10;
                                                matcher6 = matcher11;
                                                matcher3 = matcher8;
                                                i6 = i5;
                                                str4 = str8;
                                                matcher4 = matcher9;
                                                gVar2 = gVar;
                                            } else if (sentryStackFrame != null) {
                                                w4 w4Var6 = new w4();
                                                w4Var6.f12068d = 8;
                                                w4Var6.f12069e = matcher21.group(1);
                                                w4Var6.f12070i = matcher21.group(2);
                                                w4Var6.f12071v = matcher21.group(3);
                                                w4Var6.f12072w = b(matcher21, 4);
                                                sentryStackFrame.S = w4Var6;
                                                a(c0Var, w4Var6);
                                            }
                                        }
                                    }
                                    matcher10 = matcher5;
                                    matcher11 = matcher6;
                                    matcher9 = matcher7;
                                    matcher5 = matcher10;
                                    matcher6 = matcher11;
                                    matcher3 = matcher8;
                                    i6 = i5;
                                    str4 = str8;
                                    matcher4 = matcher9;
                                    gVar2 = gVar;
                                }
                                i5 = i6;
                                Collections.reverse(arrayList);
                                a0 a0Var = new a0(arrayList);
                                a0Var.f11757i = Boolean.TRUE;
                                c0Var.F = a0Var;
                            }
                        } else {
                            if (c(matcher15, str6)) {
                                Long b11 = b(matcher15, 3);
                                if (b11 == null) {
                                    v5Var.getLogger().u(SentryLevel.DEBUG, "No thread id in the dump, skipping thread.", new Object[0]);
                                } else {
                                    c0Var.f11765d = b11;
                                    c0Var.f11767i = matcher15.group(1);
                                }
                            }
                            str2 = c0Var.f11767i;
                            if (str2 != null) {
                            }
                            ArrayList arrayList2 = new ArrayList();
                            Matcher matcher162 = f11187h.matcher(str3);
                            matcher3 = f11188i.matcher(str3);
                            Matcher matcher172 = j.matcher(str3);
                            Matcher matcher182 = k.matcher(str3);
                            pattern = pattern3;
                            Matcher matcher192 = f11190m.matcher(str3);
                            matcher = matcher12;
                            Matcher matcher202 = f11189l.matcher(str3);
                            pattern2 = pattern4;
                            Matcher matcher212 = f11192o.matcher(str3);
                            matcher2 = matcher13;
                            matcher4 = f11191n.matcher(str3);
                            matcher5 = f11193p.matcher(str3);
                            str = str3;
                            matcher6 = f11194q.matcher(str3);
                            SentryStackFrame sentryStackFrame3 = null;
                            while (true) {
                                if (gVar2.f156e >= i6) {
                                }
                                matcher5 = matcher10;
                                matcher6 = matcher11;
                                matcher3 = matcher8;
                                i6 = i5;
                                str4 = str8;
                                matcher4 = matcher9;
                                gVar2 = gVar;
                            }
                            i5 = i6;
                            Collections.reverse(arrayList2);
                            a0 a0Var2 = new a0(arrayList2);
                            a0Var2.f11757i = Boolean.TRUE;
                            c0Var.F = a0Var2;
                        }
                        if (c0Var == null) {
                            this.f11198e.add(c0Var);
                        }
                    }
                }
                i5 = i6;
                pattern = pattern3;
                str = str3;
                matcher = matcher12;
                pattern2 = pattern4;
                matcher2 = matcher13;
                c0Var = null;
                if (c0Var == null) {
                }
            } else {
                i5 = i6;
                pattern = pattern3;
                str = str3;
                matcher = matcher12;
                pattern2 = pattern4;
                matcher2 = matcher13;
            }
            gVar2 = gVar;
            pattern3 = pattern;
            matcher12 = matcher;
            pattern4 = pattern2;
            matcher13 = matcher2;
            str3 = str;
            i6 = i5;
        }
    }
}
