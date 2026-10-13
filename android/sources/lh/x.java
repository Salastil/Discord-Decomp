package lh;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.util.AttributeSet;
import android.util.StateSet;
import com.discord.R;

/* loaded from: classes3.dex */
public final class x {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public d f14047b;

    /* renamed from: c, reason: collision with root package name */
    public int[][] f14048c = new int[10][];

    /* renamed from: d, reason: collision with root package name */
    public d[] f14049d = new d[10];

    public static x b(d dVar) {
        x xVar = new x();
        xVar.a(StateSet.WILD_CARD, dVar);
        return xVar;
    }

    public final void a(int[] iArr, d dVar) {
        int i5 = this.a;
        if (i5 == 0 || iArr.length == 0) {
            this.f14047b = dVar;
        }
        int[][] iArr2 = this.f14048c;
        if (i5 >= iArr2.length) {
            int i6 = i5 + 10;
            int[][] iArr3 = new int[i6][];
            System.arraycopy(iArr2, 0, iArr3, 0, i5);
            this.f14048c = iArr3;
            d[] dVarArr = new d[i6];
            System.arraycopy(this.f14049d, 0, dVarArr, 0, i5);
            this.f14049d = dVarArr;
        }
        int[][] iArr4 = this.f14048c;
        int i10 = this.a;
        iArr4[i10] = iArr;
        this.f14049d[i10] = dVar;
        this.a = i10 + 1;
    }

    public final d c(int[] iArr) {
        int i5;
        int[][] iArr2 = this.f14048c;
        int i6 = 0;
        int i10 = 0;
        while (true) {
            i5 = -1;
            if (i10 >= this.a) {
                i10 = -1;
                break;
            }
            if (StateSet.stateSetMatches(iArr2[i10], iArr)) {
                break;
            }
            i10++;
        }
        if (i10 < 0) {
            int[] iArr3 = StateSet.WILD_CARD;
            int[][] iArr4 = this.f14048c;
            while (true) {
                if (i6 >= this.a) {
                    break;
                }
                if (StateSet.stateSetMatches(iArr4[i6], iArr3)) {
                    i5 = i6;
                    break;
                }
                i6++;
            }
            i10 = i5;
        }
        return i10 < 0 ? this.f14047b : this.f14049d[i10];
    }

    public final void d(Context context, XmlResourceParser xmlResourceParser, AttributeSet attributeSet, Resources.Theme theme) {
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
                int[] iArr = lg.a.J;
                TypedArray obtainAttributes = theme == null ? resources.obtainAttributes(attributeSet, iArr) : theme.obtainStyledAttributes(attributeSet, iArr, 0, 0);
                d d6 = m.d(obtainAttributes, 5, new a(0.0f));
                obtainAttributes.recycle();
                int attributeCount = attributeSet.getAttributeCount();
                int[] iArr2 = new int[attributeCount];
                int i5 = 0;
                for (int i6 = 0; i6 < attributeCount; i6++) {
                    int attributeNameResource = attributeSet.getAttributeNameResource(i6);
                    if (attributeNameResource != R.attr.cornerSize) {
                        int i10 = i5 + 1;
                        if (!attributeSet.getAttributeBooleanValue(i6, false)) {
                            attributeNameResource = -attributeNameResource;
                        }
                        iArr2[i5] = attributeNameResource;
                        i5 = i10;
                    }
                }
                a(StateSet.trimStateSet(iArr2, i5), d6);
            }
        }
    }
}
