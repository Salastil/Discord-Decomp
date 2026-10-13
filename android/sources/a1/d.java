package a1;

import af.f0;
import android.content.Intent;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.graphics.Shader;
import android.os.Bundle;
import android.os.Looper;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseArray;
import android.util.Xml;
import androidx.work.impl.WorkDatabase_Impl;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;
import com.google.android.gms.internal.play_billing.v0;
import ds.t;
import fi.h0;
import fi.p;
import fi.w0;
import fi.y;
import hc.c1;
import java.io.File;
import java.io.IOException;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.ListIterator;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.TreeMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicReference;
import ke.b0;
import ke.d0;
import ke.w;
import kotlin.Unit;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;
import kotlinx.serialization.descriptors.SerialDescriptor;
import nd.u;
import nd.v;
import org.xmlpull.v1.XmlPullParserException;
import ps.s;

/* loaded from: classes.dex */
public final class d implements qc.e {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13d;

    /* renamed from: e, reason: collision with root package name */
    public int f14e;

    /* renamed from: i, reason: collision with root package name */
    public Object f15i;

    /* renamed from: v, reason: collision with root package name */
    public Object f16v;

    public /* synthetic */ d(int i5, byte b10) {
        this.f13d = i5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:100:0x01e7, code lost:
    
        r0 = null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x01df, code lost:
    
        if (r13.size() <= 0) goto L94;
     */
    /* JADX WARN: Code restructure failed: missing block: B:67:0x01e1, code lost:
    
        r0 = new e4.c(r13, r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x01e8, code lost:
    
        if (r0 == null) goto L97;
     */
    /* JADX WARN: Code restructure failed: missing block: B:70:0x01fa, code lost:
    
        if (r11 == 1) goto L112;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x01fd, code lost:
    
        if (r11 == 2) goto L111;
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x01ff, code lost:
    
        r16 = (int[]) r0.f7939e;
        r17 = (float[]) r0.f7940i;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x020d, code lost:
    
        if (r10 == 1) goto L109;
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x020f, code lost:
    
        if (r10 == 2) goto L108;
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x0211, code lost:
    
        r0 = android.graphics.Shader.TileMode.CLAMP;
     */
    /* JADX WARN: Code restructure failed: missing block: B:78:0x0224, code lost:
    
        r11 = new android.graphics.LinearGradient(r21, r22, r26, r27, r16, r17, r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:80:0x026d, code lost:
    
        return new a1.d(r11, (android.content.res.ColorStateList) null, 0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x021e, code lost:
    
        r0 = android.graphics.Shader.TileMode.MIRROR;
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x0221, code lost:
    
        r0 = android.graphics.Shader.TileMode.REPEAT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x0228, code lost:
    
        r11 = new android.graphics.SweepGradient(r8, r9, (int[]) r0.f7939e, (float[]) r0.f7940i);
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x023a, code lost:
    
        if (r25 <= 0.0f) goto L125;
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x023c, code lost:
    
        r20 = (int[]) r0.f7939e;
        r21 = (float[]) r0.f7940i;
     */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x024b, code lost:
    
        if (r10 == 1) goto L121;
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x024e, code lost:
    
        if (r10 == 2) goto L120;
     */
    /* JADX WARN: Code restructure failed: missing block: B:90:0x0250, code lost:
    
        r0 = android.graphics.Shader.TileMode.CLAMP;
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x0261, code lost:
    
        r11 = new android.graphics.RadialGradient(r8, r9, r25, r20, r21, r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:93:0x025b, code lost:
    
        r0 = android.graphics.Shader.TileMode.MIRROR;
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x025e, code lost:
    
        r0 = android.graphics.Shader.TileMode.REPEAT;
     */
    /* JADX WARN: Code restructure failed: missing block: B:96:0x0275, code lost:
    
        throw new org.xmlpull.v1.XmlPullParserException("<gradient> tag requires 'gradientRadius' attribute with radial type");
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x01ec, code lost:
    
        if (r20 == false) goto L99;
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x01ee, code lost:
    
        r0 = new e4.c(r6, r5, r12);
     */
    /* JADX WARN: Code restructure failed: missing block: B:99:0x01f4, code lost:
    
        r0 = new e4.c(r6, r12);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static d c(Resources resources, int i5, Resources.Theme theme) {
        int next;
        float f2;
        int i6;
        float f10;
        int i10;
        float f11;
        XmlResourceParser xml = resources.getXml(i5);
        AttributeSet asAttributeSet = Xml.asAttributeSet(xml);
        do {
            next = xml.next();
            if (next == 2) {
                break;
            }
        } while (next != 1);
        if (next != 2) {
            throw new XmlPullParserException("No start tag found");
        }
        String name = xml.getName();
        name.getClass();
        if (!name.equals("gradient")) {
            if (name.equals("selector")) {
                ColorStateList b10 = c.b(resources, xml, asAttributeSet, theme);
                return new d((Shader) null, b10, b10.getDefaultColor());
            }
            throw new XmlPullParserException(xml.getPositionDescription() + ": unsupported complex color tag " + name);
        }
        String name2 = xml.getName();
        if (!name2.equals("gradient")) {
            throw new XmlPullParserException(xml.getPositionDescription() + ": invalid gradient color tag " + name2);
        }
        TypedArray f12 = b.f(resources, theme, asAttributeSet, w0.a.f19600e);
        float f13 = xml.getAttributeValue("http://schemas.android.com/apk/res/android", "startX") != null ? f12.getFloat(8, 0.0f) : 0.0f;
        float f14 = xml.getAttributeValue("http://schemas.android.com/apk/res/android", "startY") != null ? f12.getFloat(9, 0.0f) : 0.0f;
        float f15 = xml.getAttributeValue("http://schemas.android.com/apk/res/android", "endX") != null ? f12.getFloat(10, 0.0f) : 0.0f;
        float f16 = xml.getAttributeValue("http://schemas.android.com/apk/res/android", "endY") != null ? f12.getFloat(11, 0.0f) : 0.0f;
        float f17 = xml.getAttributeValue("http://schemas.android.com/apk/res/android", "centerX") != null ? f12.getFloat(3, 0.0f) : 0.0f;
        float f18 = xml.getAttributeValue("http://schemas.android.com/apk/res/android", "centerY") != null ? f12.getFloat(4, 0.0f) : 0.0f;
        int i11 = xml.getAttributeValue("http://schemas.android.com/apk/res/android", "type") != null ? f12.getInt(2, 0) : 0;
        int color = xml.getAttributeValue("http://schemas.android.com/apk/res/android", "startColor") != null ? f12.getColor(0, 0) : 0;
        boolean z5 = xml.getAttributeValue("http://schemas.android.com/apk/res/android", "centerColor") != null;
        int color2 = xml.getAttributeValue("http://schemas.android.com/apk/res/android", "centerColor") != null ? f12.getColor(7, 0) : 0;
        if (xml.getAttributeValue("http://schemas.android.com/apk/res/android", "endColor") != null) {
            f2 = f13;
            i6 = f12.getColor(1, 0);
        } else {
            f2 = f13;
            i6 = 0;
        }
        if (xml.getAttributeValue("http://schemas.android.com/apk/res/android", "tileMode") != null) {
            f10 = f14;
            i10 = f12.getInt(6, 0);
        } else {
            f10 = f14;
            i10 = 0;
        }
        float f19 = xml.getAttributeValue("http://schemas.android.com/apk/res/android", "gradientRadius") != null ? f12.getFloat(5, 0.0f) : 0.0f;
        f12.recycle();
        int depth = xml.getDepth() + 1;
        ArrayList arrayList = new ArrayList(20);
        float f20 = f19;
        ArrayList arrayList2 = new ArrayList(20);
        while (true) {
            int next2 = xml.next();
            float f21 = f15;
            if (next2 == 1) {
                f11 = f16;
                break;
            }
            int depth2 = xml.getDepth();
            f11 = f16;
            if (depth2 < depth && next2 == 3) {
                break;
            }
            if (next2 == 2 && depth2 <= depth && xml.getName().equals("item")) {
                TypedArray f22 = b.f(resources, theme, asAttributeSet, w0.a.f19601f);
                boolean hasValue = f22.hasValue(0);
                boolean hasValue2 = f22.hasValue(1);
                if (!hasValue || !hasValue2) {
                    break;
                }
                int color3 = f22.getColor(0, 0);
                float f23 = f22.getFloat(1, 0.0f);
                f22.recycle();
                arrayList2.add(Integer.valueOf(color3));
                arrayList.add(Float.valueOf(f23));
            }
            f15 = f21;
            f16 = f11;
        }
        throw new XmlPullParserException(xml.getPositionDescription() + ": <item> tag requires a 'color' attribute and a 'offset' attribute!");
    }

    public static void d(String str) {
        if (x.i(str, ":memory:", true)) {
            return;
        }
        int length = str.length() - 1;
        int i5 = 0;
        boolean z5 = false;
        while (i5 <= length) {
            boolean z6 = Intrinsics.compare((int) str.charAt(!z5 ? i5 : length), 32) <= 0;
            if (z5) {
                if (!z6) {
                    break;
                } else {
                    length--;
                }
            } else if (z6) {
                i5++;
            } else {
                z5 = true;
            }
        }
        if (str.subSequence(i5, length + 1).toString().length() == 0) {
            return;
        }
        Log.w("SupportSQLite", "deleting the database file: ".concat(str));
        try {
            File file = new File(str);
            Intrinsics.checkNotNullParameter(file, "file");
            SQLiteDatabase.deleteDatabase(file);
        } catch (Exception e9) {
            Log.w("SupportSQLite", "delete failed: ", e9);
        }
    }

    public static void y(h3.c cVar) {
        cVar.l("CREATE TABLE IF NOT EXISTS room_master_table (id INTEGER PRIMARY KEY,identity_hash TEXT)");
        Intrinsics.checkNotNullParameter("7d73d21f1bd82c9e5268b6dcf9fde2cb", "hash");
        cVar.l("INSERT OR REPLACE INTO room_master_table (id,identity_hash) VALUES(42, '7d73d21f1bd82c9e5268b6dcf9fde2cb')");
    }

    public void A(af.m mVar) {
        Map map = (Map) this.f15i;
        if (map.containsKey("ConnectionlessLifecycleHelper")) {
            StringBuilder sb2 = new StringBuilder("ConnectionlessLifecycleHelper".length() + 59);
            sb2.append("LifecycleCallback with tag ConnectionlessLifecycleHelper already added to this fragment.");
            throw new IllegalArgumentException(sb2.toString());
        }
        map.put("ConnectionlessLifecycleHelper", mVar);
        if (this.f14e > 0) {
            new fg.a(Looper.getMainLooper(), 3).post(new v0(this, mVar, 5, false));
        }
    }

    public void B(Bundle bundle) {
        this.f14e = 1;
        this.f16v = bundle;
        for (Map.Entry entry : ((Map) this.f15i).entrySet()) {
            ((af.m) entry.getValue()).b(bundle != null ? bundle.getBundle((String) entry.getKey()) : null);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x0089 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:29:0x000c A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void C(int i5, int i6, Intent intent) {
        for (af.m mVar : ((Map) this.f15i).values()) {
            AtomicReference atomicReference = mVar.f572i;
            af.e eVar = mVar.f576y;
            AtomicReference atomicReference2 = mVar.f572i;
            f0 f0Var = (f0) atomicReference.get();
            if (i5 != 1) {
                if (i5 == 2) {
                    int b10 = mVar.f574w.b(mVar.a(), ye.f.a);
                    if (b10 == 0) {
                        atomicReference2.set(null);
                        fg.a aVar = eVar.K;
                        aVar.sendMessage(aVar.obtainMessage(3));
                    } else if (f0Var != null) {
                        if (f0Var.f558b.f20906e == 18 && b10 == 18) {
                        }
                    }
                }
                if (f0Var == null) {
                    ye.b bVar = f0Var.f558b;
                    int i10 = f0Var.a;
                    atomicReference2.set(null);
                    eVar.h(bVar, i10);
                }
            } else if (i6 == -1) {
                atomicReference2.set(null);
                fg.a aVar2 = eVar.K;
                aVar2.sendMessage(aVar2.obtainMessage(3));
            } else if (i6 == 0) {
                if (f0Var != null) {
                    ye.b bVar2 = new ye.b(intent != null ? intent.getIntExtra("<<ResolutionFailureErrorDetail>>", 13) : 13, null, f0Var.f558b.toString());
                    int i11 = f0Var.a;
                    atomicReference2.set(null);
                    eVar.h(bVar2, i11);
                }
            } else if (f0Var == null) {
            }
        }
    }

    public void D(Bundle bundle) {
        if (bundle == null) {
            return;
        }
        for (Map.Entry entry : ((Map) this.f15i).entrySet()) {
            Bundle bundle2 = new Bundle();
            f0 f0Var = (f0) ((af.m) entry.getValue()).f572i.get();
            if (f0Var != null) {
                ye.b bVar = f0Var.f558b;
                bundle2.putBoolean("resolving_error", true);
                bundle2.putInt("failed_client_id", f0Var.a);
                bundle2.putInt("failed_status", bVar.f20906e);
                bundle2.putParcelable("failed_resolution", bVar.f20907i);
            }
            bundle.putBundle((String) entry.getKey(), bundle2);
        }
    }

    @Override // qc.e
    public void H0() {
        w wVar = (w) this.f16v;
        byte[] bArr = d0.f13298f;
        wVar.getClass();
        wVar.D(bArr, bArr.length);
    }

    public bj.b a() {
        if ("".isEmpty()) {
            return new bj.b((String) this.f15i, ((Long) this.f16v).longValue(), this.f14e);
        }
        throw new IllegalStateException("Missing required properties:".concat(""));
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:21:0x01a3  */
    /* JADX WARN: Type inference failed for: r17v11 */
    /* JADX WARN: Type inference failed for: r17v12 */
    /* JADX WARN: Type inference failed for: r17v13 */
    /* JADX WARN: Type inference failed for: r17v4 */
    /* JADX WARN: Type inference failed for: r3v6 */
    /* JADX WARN: Type inference failed for: r3v8, types: [java.lang.Object[]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public w0 b() {
        int i5;
        boolean z5;
        char c6;
        Object obj;
        char c8;
        short[] sArr;
        int i6;
        boolean z6;
        ?? r17;
        boolean z7;
        w0 w0Var;
        boolean z8;
        fi.f0 f0Var = (fi.f0) this.f16v;
        if (f0Var != null) {
            throw f0Var.a();
        }
        int i10 = this.f14e;
        Object[] objArr = (Object[]) this.f15i;
        if (i10 == 0) {
            w0Var = w0.f8728y;
        } else {
            int i11 = 1;
            Object obj2 = null;
            boolean z10 = false;
            if (i10 == 1) {
                Objects.requireNonNull(objArr[0]);
                Objects.requireNonNull(objArr[1]);
                w0Var = new w0(null, objArr, 1);
            } else {
                ys.d.t(i10, objArr.length >> 1);
                int j = h0.j(i10);
                char c10 = 2;
                if (i10 == 1) {
                    Objects.requireNonNull(objArr[0]);
                    Objects.requireNonNull(objArr[1]);
                    i5 = 1;
                    z8 = false;
                } else {
                    int i12 = j - 1;
                    if (j <= 128) {
                        byte[] bArr = new byte[j];
                        Arrays.fill(bArr, (byte) -1);
                        int i13 = 0;
                        int i14 = 0;
                        while (i13 < i10) {
                            int i15 = i13 * 2;
                            int i16 = i14 * 2;
                            Object obj3 = objArr[i15];
                            Objects.requireNonNull(obj3);
                            Object obj4 = objArr[i15 ^ i11];
                            Objects.requireNonNull(obj4);
                            int p3 = p.p(obj3.hashCode());
                            while (true) {
                                int i17 = p3 & i12;
                                i6 = i11;
                                z6 = z10;
                                int i18 = bArr[i17] & 255;
                                if (i18 == 255) {
                                    bArr[i17] = (byte) i16;
                                    if (i14 < i13) {
                                        objArr[i16] = obj3;
                                        objArr[i16 ^ 1] = obj4;
                                    }
                                    i14++;
                                } else {
                                    if (obj3.equals(objArr[i18])) {
                                        int i19 = i18 ^ 1;
                                        Object obj5 = objArr[i19];
                                        Objects.requireNonNull(obj5);
                                        obj2 = new fi.f0(obj3, obj4, obj5);
                                        objArr[i19] = obj4;
                                        break;
                                    }
                                    p3 = i17 + 1;
                                    i11 = i6;
                                    z10 = z6;
                                }
                            }
                            i13++;
                            i11 = i6;
                            z10 = z6;
                        }
                        i5 = i11;
                        z5 = z10;
                        if (i14 == i10) {
                            obj2 = bArr;
                            z8 = z5;
                        } else {
                            sArr = new Object[3];
                            sArr[z5 ? 1 : 0] = bArr;
                            sArr[i5] = Integer.valueOf(i14);
                            sArr[2] = obj2;
                            obj2 = sArr;
                            z8 = z5;
                        }
                    } else {
                        i5 = 1;
                        z5 = false;
                        if (j <= 32768) {
                            sArr = new short[j];
                            Arrays.fill(sArr, (short) -1);
                            int i20 = 0;
                            for (int i21 = 0; i21 < i10; i21++) {
                                int i22 = i21 * 2;
                                int i23 = i20 * 2;
                                Object obj6 = objArr[i22];
                                Objects.requireNonNull(obj6);
                                Object obj7 = objArr[i22 ^ 1];
                                Objects.requireNonNull(obj7);
                                int p5 = p.p(obj6.hashCode());
                                while (true) {
                                    int i24 = p5 & i12;
                                    int i25 = sArr[i24] & 65535;
                                    if (i25 == 65535) {
                                        sArr[i24] = (short) i23;
                                        if (i20 < i21) {
                                            objArr[i23] = obj6;
                                            objArr[i23 ^ 1] = obj7;
                                        }
                                        i20++;
                                    } else {
                                        if (obj6.equals(objArr[i25])) {
                                            int i26 = i25 ^ 1;
                                            Object obj8 = objArr[i26];
                                            Objects.requireNonNull(obj8);
                                            obj2 = new fi.f0(obj6, obj7, obj8);
                                            objArr[i26] = obj7;
                                            break;
                                        }
                                        p5 = i24 + 1;
                                    }
                                }
                            }
                            if (i20 != i10) {
                                obj2 = new Object[]{sArr, Integer.valueOf(i20), obj2};
                                z8 = z5;
                            }
                            obj2 = sArr;
                            z8 = z5;
                        } else {
                            int[] iArr = new int[j];
                            Arrays.fill(iArr, -1);
                            int i27 = 0;
                            int i28 = 0;
                            while (i27 < i10) {
                                int i29 = i27 * 2;
                                int i30 = i28 * 2;
                                Object obj9 = objArr[i29];
                                Objects.requireNonNull(obj9);
                                Object obj10 = objArr[i29 ^ 1];
                                Objects.requireNonNull(obj10);
                                int p6 = p.p(obj9.hashCode());
                                while (true) {
                                    int i31 = p6 & i12;
                                    int i32 = iArr[i31];
                                    if (i32 == -1) {
                                        iArr[i31] = i30;
                                        if (i28 < i27) {
                                            objArr[i30] = obj9;
                                            objArr[i30 ^ 1] = obj10;
                                        }
                                        i28++;
                                        c8 = c10;
                                    } else {
                                        c8 = c10;
                                        if (obj9.equals(objArr[i32])) {
                                            int i33 = i32 ^ 1;
                                            Object obj11 = objArr[i33];
                                            Objects.requireNonNull(obj11);
                                            obj2 = new fi.f0(obj9, obj10, obj11);
                                            objArr[i33] = obj10;
                                            break;
                                        }
                                        p6 = i31 + 1;
                                        c10 = c8;
                                    }
                                }
                                i27++;
                                c10 = c8;
                            }
                            c6 = c10;
                            if (i28 == i10) {
                                obj = iArr;
                                r17 = z5;
                            } else {
                                Object[] objArr2 = new Object[3];
                                objArr2[0] = iArr;
                                objArr2[1] = Integer.valueOf(i28);
                                objArr2[c6] = obj2;
                                obj = objArr2;
                                r17 = z5;
                            }
                            z7 = obj instanceof Object[];
                            Object obj12 = obj;
                            if (z7) {
                                Object[] objArr3 = (Object[]) obj;
                                this.f16v = (fi.f0) objArr3[c6];
                                Object obj13 = objArr3[r17];
                                int intValue = ((Integer) objArr3[i5]).intValue();
                                objArr = Arrays.copyOf(objArr, intValue * 2);
                                obj12 = obj13;
                                i10 = intValue;
                            }
                            w0Var = new w0(obj12, objArr, i10);
                        }
                    }
                }
                c6 = 2;
                obj = obj2;
                r17 = z8;
                z7 = obj instanceof Object[];
                Object obj122 = obj;
                if (z7) {
                }
                w0Var = new w0(obj122, objArr, i10);
            }
        }
        fi.f0 f0Var2 = (fi.f0) this.f16v;
        if (f0Var2 == null) {
            return w0Var;
        }
        throw f0Var2.a();
    }

    @Override // qc.e
    public qc.d d0(qc.k kVar, long j) {
        long j5;
        long position = kVar.getPosition();
        int min = (int) Math.min(112800, kVar.getLength() - position);
        w wVar = (w) this.f16v;
        wVar.C(min);
        kVar.C(wVar.a, 0, min);
        int i5 = wVar.f13364c;
        long j7 = -1;
        long j10 = -1;
        long j11 = -9223372036854775807L;
        while (true) {
            if (wVar.a() < 188) {
                j5 = -9223372036854775807L;
                break;
            }
            byte[] bArr = wVar.a;
            int i6 = wVar.f13363b;
            while (true) {
                if (i6 >= i5) {
                    j5 = -9223372036854775807L;
                    break;
                }
                j5 = -9223372036854775807L;
                if (bArr[i6] == 71) {
                    break;
                }
                i6++;
            }
            int i10 = i6 + 188;
            if (i10 > i5) {
                break;
            }
            long D = jb.a.D(wVar, i6, this.f14e);
            if (D != j5) {
                long b10 = ((b0) this.f15i).b(D);
                if (b10 > j) {
                    return j11 == j5 ? new qc.d(-1, b10, position) : new qc.d(0, -9223372036854775807L, position + j10);
                }
                if (100000 + b10 > j) {
                    return new qc.d(0, -9223372036854775807L, position + i6);
                }
                j11 = b10;
                j10 = i6;
            }
            wVar.F(i10);
            j7 = i10;
        }
        return j11 != j5 ? new qc.d(-2, j11, position + j7) : qc.d.f16762d;
    }

    public void e(int i5, Format format, int i6, Object obj, long j) {
        f(new MediaLoadData(1, i5, format, i6, obj, d0.U(j), -9223372036854775807L));
    }

    public void f(MediaLoadData mediaLoadData) {
        Iterator it = ((CopyOnWriteArrayList) this.f16v).iterator();
        while (it.hasNext()) {
            nd.w wVar = (nd.w) it.next();
            d0.M(wVar.a, new v(this, wVar.f15191b, mediaLoadData, 0));
        }
    }

    public Object g(int i5) {
        SparseArray sparseArray = (SparseArray) this.f15i;
        if (this.f14e == -1) {
            this.f14e = 0;
        }
        while (true) {
            int i6 = this.f14e;
            if (i6 <= 0 || i5 >= sparseArray.keyAt(i6)) {
                break;
            }
            this.f14e--;
        }
        while (this.f14e < sparseArray.size() - 1 && i5 >= sparseArray.keyAt(this.f14e + 1)) {
            this.f14e++;
        }
        return sparseArray.valueAt(this.f14e);
    }

    public String h() {
        StringBuilder sb2 = new StringBuilder("$");
        int i5 = this.f14e + 1;
        for (int i6 = 0; i6 < i5; i6++) {
            Object obj = ((Object[]) this.f15i)[i6];
            if (obj instanceof SerialDescriptor) {
                SerialDescriptor serialDescriptor = (SerialDescriptor) obj;
                if (!Intrinsics.areEqual(serialDescriptor.b(), zr.j.f21434u)) {
                    int i10 = ((int[]) this.f16v)[i6];
                    if (i10 >= 0) {
                        sb2.append(".");
                        sb2.append(serialDescriptor.g(i10));
                    }
                } else if (((int[]) this.f16v)[i6] != -1) {
                    sb2.append("[");
                    sb2.append(((int[]) this.f16v)[i6]);
                    sb2.append("]");
                }
            } else if (obj != t.a) {
                sb2.append("['");
                sb2.append(obj);
                sb2.append("']");
            }
        }
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        return sb3;
    }

    public boolean i() {
        ColorStateList colorStateList;
        return ((Shader) this.f15i) == null && (colorStateList = (ColorStateList) this.f16v) != null && colorStateList.isStateful();
    }

    public void j(LoadEventInfo loadEventInfo, int i5, int i6, Format format, int i10, Object obj, long j, long j5) {
        k(loadEventInfo, new MediaLoadData(i5, i6, format, i10, obj, d0.U(j), d0.U(j5)));
    }

    /* JADX WARN: Type inference failed for: r4v0, types: [java.lang.Object, nd.x] */
    public void k(LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        Iterator it = ((CopyOnWriteArrayList) this.f16v).iterator();
        while (it.hasNext()) {
            nd.w wVar = (nd.w) it.next();
            d0.M(wVar.a, new u(this, wVar.f15191b, loadEventInfo, mediaLoadData, 1));
        }
    }

    public void l(LoadEventInfo loadEventInfo, int i5) {
        m(loadEventInfo, i5, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L);
    }

    public void m(LoadEventInfo loadEventInfo, int i5, int i6, Format format, int i10, Object obj, long j, long j5) {
        n(loadEventInfo, new MediaLoadData(i5, i6, format, i10, obj, d0.U(j), d0.U(j5)));
    }

    /* JADX WARN: Type inference failed for: r4v0, types: [java.lang.Object, nd.x] */
    public void n(LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        Iterator it = ((CopyOnWriteArrayList) this.f16v).iterator();
        while (it.hasNext()) {
            nd.w wVar = (nd.w) it.next();
            d0.M(wVar.a, new u(this, wVar.f15191b, loadEventInfo, mediaLoadData, 0));
        }
    }

    public void o(LoadEventInfo loadEventInfo, int i5, int i6, Format format, int i10, Object obj, long j, long j5, IOException iOException, boolean z5) {
        q(loadEventInfo, new MediaLoadData(i5, i6, format, i10, obj, d0.U(j), d0.U(j5)), iOException, z5);
    }

    public void p(LoadEventInfo loadEventInfo, int i5, IOException iOException, boolean z5) {
        o(loadEventInfo, i5, -1, null, 0, null, -9223372036854775807L, -9223372036854775807L, iOException, z5);
    }

    public void q(LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData, IOException iOException, boolean z5) {
        Iterator it = ((CopyOnWriteArrayList) this.f16v).iterator();
        while (it.hasNext()) {
            nd.w wVar = (nd.w) it.next();
            d0.M(wVar.a, new c1(this, wVar.f15191b, loadEventInfo, mediaLoadData, iOException, z5, 1));
        }
    }

    public void r(LoadEventInfo loadEventInfo, int i5, int i6, Format format, int i10, Object obj, long j, long j5) {
        s(loadEventInfo, new MediaLoadData(i5, i6, format, i10, obj, d0.U(j), d0.U(j5)));
    }

    /* JADX WARN: Type inference failed for: r4v0, types: [java.lang.Object, nd.x] */
    public void s(LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData) {
        Iterator it = ((CopyOnWriteArrayList) this.f16v).iterator();
        while (it.hasNext()) {
            nd.w wVar = (nd.w) it.next();
            d0.M(wVar.a, new u(this, wVar.f15191b, loadEventInfo, mediaLoadData, 2));
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x002c  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0056  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x006d A[ORIG_RETURN, RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void t(h3.c db) {
        boolean z5;
        List list;
        rj.b bVar = (rj.b) this.f16v;
        Intrinsics.checkNotNullParameter(db, "db");
        Intrinsics.checkNotNullParameter(db, "db");
        Cursor x5 = db.x("SELECT count(*) FROM sqlite_master WHERE name != 'android_metadata'");
        try {
            if (x5.moveToFirst()) {
                if (x5.getInt(0) == 0) {
                    z5 = true;
                    x5.close();
                    rj.b.h(db);
                    if (!z5) {
                        a3.n k = rj.b.k(db);
                        if (!k.f90b) {
                            throw new IllegalStateException("Pre-packaged database has an invalid schema: " + k.a);
                        }
                    }
                    y(db);
                    WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) bVar.f17393d;
                    list = workDatabase_Impl.f2573f;
                    if (list == null) {
                        int size = list.size();
                        for (int i5 = 0; i5 < size; i5++) {
                            ((w3.b) workDatabase_Impl.f2573f.get(i5)).getClass();
                            Intrinsics.checkNotNullParameter(db, "db");
                        }
                        return;
                    }
                    return;
                }
            }
            z5 = false;
            x5.close();
            rj.b.h(db);
            if (!z5) {
            }
            y(db);
            WorkDatabase_Impl workDatabase_Impl2 = (WorkDatabase_Impl) bVar.f17393d;
            list = workDatabase_Impl2.f2573f;
            if (list == null) {
            }
        } catch (Throwable th2) {
            try {
                throw th2;
            } catch (Throwable th3) {
                com.facebook.imagepipeline.nativecode.c.j(x5, th2);
                throw th3;
            }
        }
    }

    public String toString() {
        switch (this.f13d) {
            case 6:
                return h();
            case 14:
                StringBuilder sb2 = new StringBuilder();
                if (((s) this.f15i) == s.HTTP_1_0) {
                    sb2.append("HTTP/1.0");
                } else {
                    sb2.append("HTTP/1.1");
                }
                sb2.append(' ');
                sb2.append(this.f14e);
                sb2.append(' ');
                sb2.append((String) this.f16v);
                String sb3 = sb2.toString();
                Intrinsics.checkNotNullExpressionValue(sb3, "StringBuilder().apply(builderAction).toString()");
                return sb3;
            default:
                return super.toString();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x002f  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x009e A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:57:0x006e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void u(h3.c db) {
        boolean z5;
        a3.i iVar;
        Intrinsics.checkNotNullParameter(db, "db");
        Intrinsics.checkNotNullParameter(db, "db");
        Intrinsics.checkNotNullParameter(db, "db");
        Cursor x5 = db.x("SELECT 1 FROM sqlite_master WHERE type = 'table' AND name='room_master_table'");
        try {
            if (x5.moveToFirst()) {
                if (x5.getInt(0) != 0) {
                    z5 = true;
                    x5.close();
                    if (z5) {
                        a3.n k = rj.b.k(db);
                        if (!k.f90b) {
                            throw new IllegalStateException("Pre-packaged database has an invalid schema: " + k.a);
                        }
                        y(db);
                    } else {
                        Cursor t5 = db.t(new a5.m("SELECT identity_hash FROM room_master_table WHERE id = 42 LIMIT 1", 1));
                        try {
                            String string = t5.moveToFirst() ? t5.getString(0) : null;
                            t5.close();
                            if (!Intrinsics.areEqual("7d73d21f1bd82c9e5268b6dcf9fde2cb", string) && !Intrinsics.areEqual("3071c8717539de5d5353f4c8cd59a032", string)) {
                                throw new IllegalStateException(a3.e.k("Room cannot verify the data integrity. Looks like you've changed schema but forgot to update the version number. You can simply fix this by increasing the version number. Expected identity hash: 7d73d21f1bd82c9e5268b6dcf9fde2cb, found: ", string));
                            }
                        } finally {
                        }
                    }
                    rj.b bVar = (rj.b) this.f16v;
                    ((WorkDatabase_Impl) bVar.f17393d).a = db;
                    db.l("PRAGMA foreign_keys = ON");
                    WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) bVar.f17393d;
                    Intrinsics.checkNotNullParameter(db, "db");
                    iVar = workDatabase_Impl.f2571d;
                    iVar.getClass();
                    Intrinsics.checkNotNullParameter(db, "database");
                    synchronized (iVar.k) {
                        if (iVar.f66f) {
                            Log.e("ROOM", "Invalidation tracker is initialized twice :/.");
                        } else {
                            db.l("PRAGMA temp_store = MEMORY;");
                            db.l("PRAGMA recursive_triggers='ON';");
                            db.l("CREATE TEMP TABLE room_table_modification_log (table_id INTEGER PRIMARY KEY, invalidated INTEGER NOT NULL DEFAULT 0)");
                            iVar.c(db);
                            iVar.f67g = db.g("UPDATE room_table_modification_log SET invalidated = 0 WHERE invalidated = 1");
                            iVar.f66f = true;
                            Unit unit = Unit.a;
                        }
                    }
                    List list = ((WorkDatabase_Impl) bVar.f17393d).f2573f;
                    if (list != null) {
                        int size = list.size();
                        for (int i5 = 0; i5 < size; i5++) {
                            w3.b bVar2 = (w3.b) ((WorkDatabase_Impl) bVar.f17393d).f2573f.get(i5);
                            bVar2.getClass();
                            Intrinsics.checkNotNullParameter(db, "db");
                            Intrinsics.checkNotNullParameter(db, "db");
                            db.c();
                            try {
                                StringBuilder sb2 = new StringBuilder("DELETE FROM workspec WHERE state IN (2, 3, 5) AND (last_enqueue_time + minimum_retention_duration) < ");
                                bVar2.a.getClass();
                                sb2.append(System.currentTimeMillis() - w3.l.a);
                                sb2.append(" AND (SELECT COUNT(*)=0 FROM dependency WHERE     prerequisite_id=id AND     work_spec_id NOT IN         (SELECT id FROM workspec WHERE state IN (2, 3, 5)))");
                                db.l(sb2.toString());
                                db.A();
                                db.i();
                            } catch (Throwable th2) {
                                db.i();
                                throw th2;
                            }
                        }
                    }
                    this.f15i = null;
                    return;
                }
            }
            z5 = false;
            x5.close();
            if (z5) {
            }
            rj.b bVar3 = (rj.b) this.f16v;
            ((WorkDatabase_Impl) bVar3.f17393d).a = db;
            db.l("PRAGMA foreign_keys = ON");
            WorkDatabase_Impl workDatabase_Impl2 = (WorkDatabase_Impl) bVar3.f17393d;
            Intrinsics.checkNotNullParameter(db, "db");
            iVar = workDatabase_Impl2.f2571d;
            iVar.getClass();
            Intrinsics.checkNotNullParameter(db, "database");
            synchronized (iVar.k) {
            }
        } finally {
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:53:0x0046  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x0092 A[EDGE_INSN: B:87:0x0092->B:70:0x0092 BREAK  A[LOOP:3: B:49:0x002e->B:71:?], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void v(h3.c db, int i5, int i6) {
        Set set;
        Iterable iterable;
        TreeMap treeMap;
        boolean z5;
        rj.b bVar = (rj.b) this.f16v;
        Intrinsics.checkNotNullParameter(db, "db");
        a3.b bVar2 = (a3.b) this.f15i;
        if (bVar2 != null) {
            gj.c cVar = bVar2.f46d;
            cVar.getClass();
            if (i5 == i6) {
                iterable = m0.f13512d;
            } else {
                boolean z6 = i6 > i5;
                ArrayList arrayList = new ArrayList();
                int i10 = i5;
                do {
                    if (z6) {
                        if (i10 >= i6) {
                            iterable = arrayList;
                            break;
                        }
                        treeMap = (TreeMap) ((LinkedHashMap) cVar.f9329e).get(Integer.valueOf(i10));
                        if (treeMap == null) {
                            break;
                        }
                        for (Integer targetVersion : z6 ? treeMap.descendingKeySet() : treeMap.keySet()) {
                            if (z6) {
                                int i11 = i10 + 1;
                                Intrinsics.checkNotNullExpressionValue(targetVersion, "targetVersion");
                                int intValue = targetVersion.intValue();
                                if (i11 <= intValue && intValue <= i6) {
                                    Object obj = treeMap.get(targetVersion);
                                    Intrinsics.checkNotNull(obj);
                                    arrayList.add(obj);
                                    i10 = targetVersion.intValue();
                                    z5 = true;
                                    break;
                                }
                            } else {
                                Intrinsics.checkNotNullExpressionValue(targetVersion, "targetVersion");
                                int intValue2 = targetVersion.intValue();
                                if (i6 <= intValue2 && intValue2 < i10) {
                                    Object obj2 = treeMap.get(targetVersion);
                                    Intrinsics.checkNotNull(obj2);
                                    arrayList.add(obj2);
                                    i10 = targetVersion.intValue();
                                    z5 = true;
                                    break;
                                    break;
                                }
                            }
                        }
                        z5 = false;
                    } else {
                        if (i10 <= i6) {
                            iterable = arrayList;
                            break;
                        }
                        treeMap = (TreeMap) ((LinkedHashMap) cVar.f9329e).get(Integer.valueOf(i10));
                        if (treeMap == null) {
                        }
                    }
                } while (z5);
                iterable = null;
            }
            if (iterable != null) {
                Intrinsics.checkNotNullParameter(db, "db");
                go.e b10 = kotlin.collections.b0.b();
                Cursor x5 = db.x("SELECT name FROM sqlite_master WHERE type = 'trigger'");
                while (x5.moveToNext()) {
                    try {
                        b10.add(x5.getString(0));
                    } finally {
                    }
                }
                Unit unit = Unit.a;
                x5.close();
                ListIterator listIterator = kotlin.collections.b0.a(b10).listIterator(0);
                while (true) {
                    go.b bVar3 = (go.b) listIterator;
                    if (!bVar3.hasNext()) {
                        break;
                    }
                    String triggerName = (String) bVar3.next();
                    Intrinsics.checkNotNullExpressionValue(triggerName, "triggerName");
                    if (x.o(triggerName, "room_fts_content_sync_", false)) {
                        db.l("DROP TRIGGER IF EXISTS ".concat(triggerName));
                    }
                }
                Iterator it = iterable.iterator();
                while (it.hasNext()) {
                    ((b3.a) it.next()).a(db);
                }
                a3.n k = rj.b.k(db);
                if (!k.f90b) {
                    throw new IllegalStateException("Migration didn't properly handle: " + k.a);
                }
                y(db);
                return;
            }
        }
        a3.b bVar4 = (a3.b) this.f15i;
        if (bVar4 != null) {
            if (!((i5 <= i6 || !bVar4.k) && bVar4.j && ((set = bVar4.f52l) == null || !set.contains(Integer.valueOf(i5))))) {
                db.l("DROP TABLE IF EXISTS `Dependency`");
                db.l("DROP TABLE IF EXISTS `WorkSpec`");
                db.l("DROP TABLE IF EXISTS `WorkTag`");
                db.l("DROP TABLE IF EXISTS `SystemIdInfo`");
                db.l("DROP TABLE IF EXISTS `WorkName`");
                db.l("DROP TABLE IF EXISTS `WorkProgress`");
                db.l("DROP TABLE IF EXISTS `Preference`");
                WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) bVar.f17393d;
                List list = workDatabase_Impl.f2573f;
                if (list != null) {
                    int size = list.size();
                    for (int i12 = 0; i12 < size; i12++) {
                        ((w3.b) workDatabase_Impl.f2573f.get(i12)).getClass();
                        Intrinsics.checkNotNullParameter(db, "db");
                    }
                }
                rj.b.h(db);
                return;
            }
        }
        throw new IllegalStateException(s4.h.d(i5, "A migration from ", i6, " to ", " was required but not found. Please provide the necessary Migration path via RoomDatabase.Builder.addMigration(Migration ...) or allow for destructive migrations via one of the RoomDatabase.Builder.fallbackToDestructiveMigration* methods."));
    }

    public void w(Object obj, Object obj2) {
        int i5 = (this.f14e + 1) * 2;
        Object[] objArr = (Object[]) this.f15i;
        if (i5 > objArr.length) {
            this.f15i = Arrays.copyOf(objArr, y.d(objArr.length, i5));
        }
        if (obj == null) {
            String valueOf = String.valueOf(obj2);
            StringBuilder sb2 = new StringBuilder(valueOf.length() + 24);
            sb2.append("null key in entry: null=");
            sb2.append(valueOf);
            throw new NullPointerException(sb2.toString());
        }
        if (obj2 == null) {
            String valueOf2 = String.valueOf(obj);
            StringBuilder sb3 = new StringBuilder(valueOf2.length() + 26);
            sb3.append("null value in entry: ");
            sb3.append(valueOf2);
            sb3.append("=null");
            throw new NullPointerException(sb3.toString());
        }
        Object[] objArr2 = (Object[]) this.f15i;
        int i6 = this.f14e;
        int i10 = i6 * 2;
        objArr2[i10] = obj;
        objArr2[i10 + 1] = obj2;
        this.f14e = i6 + 1;
    }

    public List x(CharSequence charSequence) {
        charSequence.getClass();
        ve.i iVar = (ve.i) this.f16v;
        iVar.getClass();
        ei.i iVar2 = new ei.i(iVar, this, charSequence);
        ArrayList arrayList = new ArrayList();
        while (iVar2.hasNext()) {
            arrayList.add((String) iVar2.next());
        }
        return Collections.unmodifiableList(arrayList);
    }

    public void z(MediaLoadData mediaLoadData) {
        nd.s sVar = (nd.s) this.f15i;
        sVar.getClass();
        Iterator it = ((CopyOnWriteArrayList) this.f16v).iterator();
        while (it.hasNext()) {
            nd.w wVar = (nd.w) it.next();
            d0.M(wVar.a, new com.appsflyer.internal.p(9, this, wVar.f15191b, sVar, mediaLoadData));
        }
    }

    public /* synthetic */ d(Object obj, int i5, Serializable serializable, int i6) {
        this.f13d = i6;
        this.f15i = obj;
        this.f14e = i5;
        this.f16v = serializable;
    }

    public d() {
        this.f13d = 3;
        this.f15i = Collections.synchronizedMap(new s.e(0));
        this.f14e = 0;
    }

    public d(String str, String[] strArr) {
        String sb2;
        this.f13d = 7;
        if (strArr.length == 0) {
            sb2 = "";
        } else {
            StringBuilder sb3 = new StringBuilder();
            sb3.append('[');
            for (String str2 : strArr) {
                if (sb3.length() > 1) {
                    sb3.append(",");
                }
                sb3.append(str2);
            }
            sb3.append("] ");
            sb2 = sb3.toString();
        }
        this.f16v = sb2;
        this.f15i = str;
        int length = str.length();
        Object[] objArr = {str, 23};
        if (length <= 23) {
            int i5 = 2;
            while (i5 <= 7 && !Log.isLoggable((String) this.f15i, i5)) {
                i5++;
            }
            this.f14e = i5;
            return;
        }
        throw new IllegalArgumentException(String.format("tag \"%s\" is longer than the %d character maximum", objArr));
    }

    public d(s protocol, int i5, String message) {
        this.f13d = 14;
        Intrinsics.checkNotNullParameter(protocol, "protocol");
        Intrinsics.checkNotNullParameter(message, "message");
        this.f15i = protocol;
        this.f14e = i5;
        this.f16v = message;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public d(a3.b configuration, rj.b delegate) {
        this(20, 1);
        this.f13d = 1;
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        Intrinsics.checkNotNullParameter("7d73d21f1bd82c9e5268b6dcf9fde2cb", "identityHash");
        Intrinsics.checkNotNullParameter("3071c8717539de5d5353f4c8cd59a032", "legacyHash");
        this.f15i = configuration;
        this.f16v = delegate;
    }

    public d(n1.k kVar) {
        this.f13d = 13;
        this.f15i = new SparseArray();
        this.f16v = kVar;
        this.f14e = -1;
    }

    public d(Shader shader, ColorStateList colorStateList, int i5) {
        this.f13d = 0;
        this.f15i = shader;
        this.f16v = colorStateList;
        this.f14e = i5;
    }

    public d(int i5, b0 b0Var) {
        this.f13d = 2;
        this.f14e = i5;
        this.f15i = b0Var;
        this.f16v = new w();
    }

    public d(int i5, int i6) {
        this.f13d = i6;
        switch (i6) {
            case 9:
                this.f15i = new Object[i5 * 2];
                this.f14e = 0;
                break;
            default:
                this.f14e = i5;
                break;
        }
    }

    public d(ve.i iVar) {
        this.f13d = 8;
        this.f16v = iVar;
        this.f15i = ei.c.f8098d;
        this.f14e = Integer.MAX_VALUE;
    }

    public d(CopyOnWriteArrayList copyOnWriteArrayList, int i5, nd.s sVar) {
        this.f13d = 12;
        this.f16v = copyOnWriteArrayList;
        this.f14e = i5;
        this.f15i = sVar;
    }
}
