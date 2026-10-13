package lh;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.util.AttributeSet;
import android.util.StateSet;
import android.util.Xml;
import com.discord.R;
import java.io.IOException;
import java.util.Objects;
import org.xmlpull.v1.XmlPullParserException;

/* loaded from: classes3.dex */
public final class z {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final m f14058b;

    /* renamed from: c, reason: collision with root package name */
    public final int[][] f14059c;

    /* renamed from: d, reason: collision with root package name */
    public final m[] f14060d;

    /* renamed from: e, reason: collision with root package name */
    public final x f14061e;

    /* renamed from: f, reason: collision with root package name */
    public final x f14062f;

    /* renamed from: g, reason: collision with root package name */
    public final x f14063g;

    /* renamed from: h, reason: collision with root package name */
    public final x f14064h;

    public z(y yVar) {
        this.a = yVar.f14050b;
        this.f14058b = (m) yVar.f14051c;
        this.f14059c = (int[][]) yVar.f14052d;
        this.f14060d = (m[]) yVar.f14053e;
        this.f14061e = (x) yVar.f14054f;
        this.f14062f = (x) yVar.f14055g;
        this.f14063g = (x) yVar.f14056h;
        this.f14064h = (x) yVar.f14057i;
    }

    public static void a(y yVar, Context context, XmlResourceParser xmlResourceParser, AttributeSet attributeSet, Resources.Theme theme) {
        int depth = xmlResourceParser.getDepth() + 1;
        while (true) {
            int next = xmlResourceParser.next();
            if (next == 1) {
                return;
            }
            int depth2 = xmlResourceParser.getDepth();
            if (depth2 < depth && next == 3) {
                return;
            }
            if (next == 2 && depth2 <= depth && xmlResourceParser.getName().equals("item")) {
                Resources resources = context.getResources();
                int[] iArr = lg.a.A;
                TypedArray obtainAttributes = theme == null ? resources.obtainAttributes(attributeSet, iArr) : theme.obtainStyledAttributes(attributeSet, iArr, 0, 0);
                m a = m.a(context, obtainAttributes.getResourceId(0, 0), obtainAttributes.getResourceId(1, 0)).a();
                obtainAttributes.recycle();
                int attributeCount = attributeSet.getAttributeCount();
                int[] iArr2 = new int[attributeCount];
                int i5 = 0;
                for (int i6 = 0; i6 < attributeCount; i6++) {
                    int attributeNameResource = attributeSet.getAttributeNameResource(i6);
                    if (attributeNameResource != R.attr.shapeAppearance && attributeNameResource != R.attr.shapeAppearanceOverlay) {
                        int i10 = i5 + 1;
                        if (!attributeSet.getAttributeBooleanValue(i6, false)) {
                            attributeNameResource = -attributeNameResource;
                        }
                        iArr2[i5] = attributeNameResource;
                        i5 = i10;
                    }
                }
                yVar.a(StateSet.trimStateSet(iArr2, i5), a);
            }
        }
    }

    public static z b(Context context, TypedArray typedArray, int i5) {
        XmlResourceParser xml;
        AttributeSet asAttributeSet;
        int next;
        int resourceId = typedArray.getResourceId(i5, 0);
        if (resourceId == 0 || !Objects.equals(context.getResources().getResourceTypeName(resourceId), "xml")) {
            return null;
        }
        y yVar = new y(0);
        yVar.f();
        try {
            xml = context.getResources().getXml(resourceId);
            try {
                asAttributeSet = Xml.asAttributeSet(xml);
                do {
                    next = xml.next();
                    if (next == 2) {
                        break;
                    }
                } while (next != 1);
            } catch (Throwable th2) {
                if (xml != null) {
                    try {
                        xml.close();
                    } catch (Throwable th3) {
                        th2.addSuppressed(th3);
                    }
                }
                throw th2;
            }
        } catch (Resources.NotFoundException | IOException | XmlPullParserException unused) {
            yVar.f();
        }
        if (next != 2) {
            throw new XmlPullParserException("No start tag found");
        }
        if (xml.getName().equals("selector")) {
            a(yVar, context, xml, asAttributeSet, context.getTheme());
        }
        xml.close();
        if (yVar.f14050b == 0) {
            return null;
        }
        return new z(yVar);
    }

    public final m c() {
        m mVar = this.f14058b;
        x xVar = this.f14064h;
        x xVar2 = this.f14063g;
        x xVar3 = this.f14062f;
        x xVar4 = this.f14061e;
        if (xVar4 == null && xVar3 == null && xVar2 == null && xVar == null) {
            return mVar;
        }
        l g6 = mVar.g();
        if (xVar4 != null) {
            g6.f14010e = xVar4.f14047b;
        }
        if (xVar3 != null) {
            g6.f14011f = xVar3.f14047b;
        }
        if (xVar2 != null) {
            g6.f14013h = xVar2.f14047b;
        }
        if (xVar != null) {
            g6.f14012g = xVar.f14047b;
        }
        return g6.a();
    }

    public final boolean d() {
        x xVar;
        x xVar2;
        x xVar3;
        x xVar4;
        return this.a > 1 || ((xVar = this.f14061e) != null && xVar.a > 1) || (((xVar2 = this.f14062f) != null && xVar2.a > 1) || (((xVar3 = this.f14063g) != null && xVar3.a > 1) || ((xVar4 = this.f14064h) != null && xVar4.a > 1)));
    }
}
