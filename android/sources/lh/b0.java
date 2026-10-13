package lh;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.util.AttributeSet;
import android.util.StateSet;
import android.util.TypedValue;
import com.discord.R;

/* loaded from: classes3.dex */
public final class b0 {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public u4.c f13978b;

    /* renamed from: c, reason: collision with root package name */
    public int[][] f13979c;

    /* renamed from: d, reason: collision with root package name */
    public u4.c[] f13980d;

    /* JADX WARN: Removed duplicated region for block: B:29:0x0077  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00a9  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(Context context, XmlResourceParser xmlResourceParser, AttributeSet attributeSet, Resources.Theme theme) {
        a0 a0Var;
        int attributeCount;
        int i5;
        int i6;
        int[][] iArr;
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
                int[] iArr2 = lg.a.M;
                TypedArray obtainAttributes = theme == null ? resources.obtainAttributes(attributeSet, iArr2) : theme.obtainStyledAttributes(attributeSet, iArr2, 0, 0);
                TypedValue peekValue = obtainAttributes.peekValue(0);
                if (peekValue != null) {
                    int i10 = peekValue.type;
                    if (i10 == 5) {
                        a0Var = new a0(2, TypedValue.complexToDimensionPixelSize(peekValue.data, obtainAttributes.getResources().getDisplayMetrics()));
                    } else if (i10 == 6) {
                        a0Var = new a0(1, peekValue.getFraction(1.0f, 1.0f));
                    }
                    obtainAttributes.recycle();
                    attributeCount = attributeSet.getAttributeCount();
                    int[] iArr3 = new int[attributeCount];
                    int i11 = 0;
                    for (i5 = 0; i5 < attributeCount; i5++) {
                        int attributeNameResource = attributeSet.getAttributeNameResource(i5);
                        if (attributeNameResource != R.attr.widthChange) {
                            int i12 = i11 + 1;
                            if (!attributeSet.getAttributeBooleanValue(i5, false)) {
                                attributeNameResource = -attributeNameResource;
                            }
                            iArr3[i11] = attributeNameResource;
                            i11 = i12;
                        }
                    }
                    int[] trimStateSet = StateSet.trimStateSet(iArr3, i11);
                    u4.c cVar = new u4.c();
                    cVar.f18811d = a0Var;
                    i6 = this.a;
                    if (i6 != 0 || trimStateSet.length == 0) {
                        this.f13978b = cVar;
                    }
                    iArr = this.f13979c;
                    if (i6 >= iArr.length) {
                        int i13 = i6 + 10;
                        int[][] iArr4 = new int[i13][];
                        System.arraycopy(iArr, 0, iArr4, 0, i6);
                        this.f13979c = iArr4;
                        u4.c[] cVarArr = new u4.c[i13];
                        System.arraycopy(this.f13980d, 0, cVarArr, 0, i6);
                        this.f13980d = cVarArr;
                    }
                    int[][] iArr5 = this.f13979c;
                    int i14 = this.a;
                    iArr5[i14] = trimStateSet;
                    this.f13980d[i14] = cVar;
                    this.a = i14 + 1;
                }
                a0Var = null;
                obtainAttributes.recycle();
                attributeCount = attributeSet.getAttributeCount();
                int[] iArr32 = new int[attributeCount];
                int i112 = 0;
                while (i5 < attributeCount) {
                }
                int[] trimStateSet2 = StateSet.trimStateSet(iArr32, i112);
                u4.c cVar2 = new u4.c();
                cVar2.f18811d = a0Var;
                i6 = this.a;
                if (i6 != 0) {
                }
                this.f13978b = cVar2;
                iArr = this.f13979c;
                if (i6 >= iArr.length) {
                }
                int[][] iArr52 = this.f13979c;
                int i142 = this.a;
                iArr52[i142] = trimStateSet2;
                this.f13980d[i142] = cVar2;
                this.a = i142 + 1;
            }
        }
    }
}
