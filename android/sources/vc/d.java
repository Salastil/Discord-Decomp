package vc;

import androidx.recyclerview.widget.h;
import com.reactnativecommunity.clipboard.ClipboardModule;
import fi.c0;
import fi.e0;
import fi.p;
import fi.r0;
import fi.y;
import hc.g1;
import java.io.StringReader;
import java.util.Arrays;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserFactory;

/* loaded from: classes3.dex */
public abstract class d {
    public static final String[] a = {"Camera:MotionPhoto", "GCamera:MotionPhoto", "Camera:MicroVideo", "GCamera:MicroVideo"};

    /* renamed from: b, reason: collision with root package name */
    public static final String[] f19333b = {"Camera:MotionPhotoPresentationTimestampUs", "GCamera:MotionPhotoPresentationTimestampUs", "Camera:MicroVideoPresentationTimestampUs", "GCamera:MicroVideoPresentationTimestampUs"};

    /* renamed from: c, reason: collision with root package name */
    public static final String[] f19334c = {"Camera:MicroVideoOffset", "GCamera:MicroVideoOffset"};

    /* JADX WARN: Code restructure failed: missing block: B:21:0x005e, code lost:
    
        if (r6 == (-1)) goto L19;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static h a(String str) {
        XmlPullParser newPullParser = XmlPullParserFactory.newInstance().newPullParser();
        newPullParser.setInput(new StringReader(str));
        newPullParser.next();
        if (!ke.b.C(newPullParser, "x:xmpmeta")) {
            throw g1.a("Couldn't find xmp metadata", null);
        }
        c0 c0Var = e0.f8656e;
        r0 r0Var = r0.f8704w;
        long j = -9223372036854775807L;
        loop0: while (true) {
            newPullParser.next();
            if (ke.b.C(newPullParser, "rdf:Description")) {
                int i5 = 0;
                int i6 = 0;
                while (true) {
                    if (i6 >= 4) {
                        break loop0;
                    }
                    String w5 = ke.b.w(newPullParser, a[i6]);
                    if (w5 == null) {
                        i6++;
                    } else {
                        if (Integer.parseInt(w5) != 1) {
                            break;
                        }
                        int i10 = 0;
                        while (true) {
                            if (i10 >= 4) {
                                break;
                            }
                            String w6 = ke.b.w(newPullParser, f19333b[i10]);
                            if (w6 != null) {
                                j = Long.parseLong(w6);
                            } else {
                                i10++;
                            }
                        }
                        j = -9223372036854775807L;
                        while (true) {
                            if (i5 >= 2) {
                                c0 c0Var2 = e0.f8656e;
                                r0Var = r0.f8704w;
                                break;
                            }
                            String w7 = ke.b.w(newPullParser, f19334c[i5]);
                            if (w7 != null) {
                                Object[] objArr = {new b(0L, 0L, ClipboardModule.MIMETYPE_JPEG), new b(Long.parseLong(w7), 0L, "video/mp4")};
                                p.b(2, objArr);
                                r0Var = e0.j(2, objArr);
                                break;
                            }
                            i5++;
                        }
                    }
                }
            } else if (ke.b.C(newPullParser, "Container:Directory")) {
                r0Var = b(newPullParser, "Container", "Item");
            } else if (ke.b.C(newPullParser, "GContainer:Directory")) {
                r0Var = b(newPullParser, "GContainer", "GContainerItem");
            }
            if (ke.b.B(newPullParser, "x:xmpmeta")) {
                if (!r0Var.isEmpty()) {
                    return new h(j, r0Var, 4);
                }
            }
        }
        return null;
    }

    public static r0 b(XmlPullParser xmlPullParser, String str, String str2) {
        c0 c0Var = e0.f8656e;
        p.c(4, "initialCapacity");
        Object[] objArr = new Object[4];
        String concat = str.concat(":Item");
        String concat2 = str.concat(":Directory");
        int i5 = 0;
        boolean z5 = false;
        do {
            xmlPullParser.next();
            if (ke.b.C(xmlPullParser, concat)) {
                String concat3 = str2.concat(":Mime");
                String concat4 = str2.concat(":Semantic");
                String concat5 = str2.concat(":Length");
                String concat6 = str2.concat(":Padding");
                String w5 = ke.b.w(xmlPullParser, concat3);
                String w6 = ke.b.w(xmlPullParser, concat4);
                String w7 = ke.b.w(xmlPullParser, concat5);
                String w10 = ke.b.w(xmlPullParser, concat6);
                if (w5 == null || w6 == null) {
                    return r0.f8704w;
                }
                b bVar = new b(w7 != null ? Long.parseLong(w7) : 0L, w10 != null ? Long.parseLong(w10) : 0L, w5);
                int i6 = i5 + 1;
                if (objArr.length < i6) {
                    objArr = Arrays.copyOf(objArr, y.d(objArr.length, i6));
                } else {
                    if (z5) {
                        objArr = (Object[]) objArr.clone();
                    }
                    objArr[i5] = bVar;
                    i5++;
                }
                z5 = false;
                objArr[i5] = bVar;
                i5++;
            }
        } while (!ke.b.B(xmlPullParser, concat2));
        return e0.j(i5, objArr);
    }
}
