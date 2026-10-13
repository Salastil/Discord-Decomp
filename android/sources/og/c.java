package og;

import a5.k0;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.os.Build;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Xml;
import ch.q;
import com.discord.R;
import java.io.IOException;
import java.util.Locale;
import org.xmlpull.v1.XmlPullParserException;

/* loaded from: classes3.dex */
public final class c {
    public final b a;

    /* renamed from: b, reason: collision with root package name */
    public final b f15876b = new b();

    /* renamed from: c, reason: collision with root package name */
    public final float f15877c;

    /* renamed from: d, reason: collision with root package name */
    public final float f15878d;

    /* renamed from: e, reason: collision with root package name */
    public final float f15879e;

    /* renamed from: f, reason: collision with root package name */
    public final float f15880f;

    /* renamed from: g, reason: collision with root package name */
    public final float f15881g;

    /* renamed from: h, reason: collision with root package name */
    public final float f15882h;

    /* renamed from: i, reason: collision with root package name */
    public final int f15883i;
    public final int j;
    public final int k;

    /* renamed from: l, reason: collision with root package name */
    public int f15884l;

    public c(Context context, b bVar) {
        AttributeSet attributeSet;
        int i5;
        int next;
        b bVar2 = bVar == null ? new b() : bVar;
        int i6 = bVar2.f15869d;
        if (i6 != 0) {
            try {
                XmlResourceParser xml = context.getResources().getXml(i6);
                do {
                    next = xml.next();
                    if (next == 2) {
                        break;
                    }
                } while (next != 1);
                if (next != 2) {
                    throw new XmlPullParserException("No start tag found");
                }
                if (!TextUtils.equals(xml.getName(), "badge")) {
                    throw new XmlPullParserException("Must have a <" + ((Object) "badge") + "> start tag");
                }
                AttributeSet asAttributeSet = Xml.asAttributeSet(xml);
                attributeSet = asAttributeSet;
                i5 = asAttributeSet.getStyleAttribute();
            } catch (IOException | XmlPullParserException e9) {
                Resources.NotFoundException notFoundException = new Resources.NotFoundException("Can't load badge resource ID #0x" + Integer.toHexString(i6));
                notFoundException.initCause(e9);
                throw notFoundException;
            }
        } else {
            attributeSet = null;
            i5 = 0;
        }
        TypedArray f2 = q.f(context, attributeSet, lg.a.f13954c, R.attr.badgeStyle, i5 == 0 ? R.style.Widget_MaterialComponents_Badge : i5, new int[0]);
        Resources resources = context.getResources();
        this.f15877c = f2.getDimensionPixelSize(5, -1);
        this.f15883i = context.getResources().getDimensionPixelSize(R.dimen.mtrl_badge_horizontal_edge_offset);
        this.j = context.getResources().getDimensionPixelSize(R.dimen.mtrl_badge_text_horizontal_edge_offset);
        this.f15878d = f2.getDimensionPixelSize(15, -1);
        this.f15879e = f2.getDimension(13, resources.getDimension(R.dimen.m3_badge_size));
        this.f15881g = f2.getDimension(18, resources.getDimension(R.dimen.m3_badge_with_text_size));
        this.f15880f = f2.getDimension(4, resources.getDimension(R.dimen.m3_badge_size));
        this.f15882h = f2.getDimension(14, resources.getDimension(R.dimen.m3_badge_with_text_size));
        this.k = f2.getInt(25, 1);
        this.f15884l = f2.getInt(2, 0);
        b bVar3 = this.f15876b;
        int i10 = bVar2.F;
        bVar3.F = i10 == -2 ? 255 : i10;
        int i11 = bVar2.H;
        if (i11 != -2) {
            bVar3.H = i11;
        } else if (f2.hasValue(24)) {
            this.f15876b.H = f2.getInt(24, 0);
        } else {
            this.f15876b.H = -1;
        }
        String str = bVar2.G;
        if (str != null) {
            this.f15876b.G = str;
        } else if (f2.hasValue(8)) {
            this.f15876b.G = f2.getString(8);
        }
        b bVar4 = this.f15876b;
        bVar4.L = bVar2.L;
        CharSequence charSequence = bVar2.M;
        bVar4.M = charSequence == null ? context.getString(R.string.mtrl_badge_numberless_content_description) : charSequence;
        b bVar5 = this.f15876b;
        int i12 = bVar2.N;
        bVar5.N = i12 == 0 ? R.plurals.mtrl_badge_content_description : i12;
        int i13 = bVar2.O;
        bVar5.O = i13 == 0 ? R.string.mtrl_exceed_max_badge_number_content_description : i13;
        Boolean bool = bVar2.Q;
        bVar5.Q = Boolean.valueOf(bool == null || bool.booleanValue());
        b bVar6 = this.f15876b;
        int i14 = bVar2.I;
        bVar6.I = i14 == -2 ? f2.getInt(22, -2) : i14;
        b bVar7 = this.f15876b;
        int i15 = bVar2.J;
        bVar7.J = i15 == -2 ? f2.getInt(23, -2) : i15;
        b bVar8 = this.f15876b;
        Integer num = bVar2.f15873w;
        bVar8.f15873w = Integer.valueOf(num == null ? f2.getResourceId(6, R.style.ShapeAppearance_M3_Sys_Shape_Corner_Full) : num.intValue());
        b bVar9 = this.f15876b;
        Integer num2 = bVar2.f15874x;
        bVar9.f15874x = Integer.valueOf(num2 == null ? f2.getResourceId(7, 0) : num2.intValue());
        b bVar10 = this.f15876b;
        Integer num3 = bVar2.f15875y;
        bVar10.f15875y = Integer.valueOf(num3 == null ? f2.getResourceId(16, R.style.ShapeAppearance_M3_Sys_Shape_Corner_Full) : num3.intValue());
        b bVar11 = this.f15876b;
        Integer num4 = bVar2.E;
        bVar11.E = Integer.valueOf(num4 == null ? f2.getResourceId(17, 0) : num4.intValue());
        b bVar12 = this.f15876b;
        Integer num5 = bVar2.f15870e;
        bVar12.f15870e = Integer.valueOf(num5 == null ? k0.u(context, f2, 1).getDefaultColor() : num5.intValue());
        b bVar13 = this.f15876b;
        Integer num6 = bVar2.f15872v;
        bVar13.f15872v = Integer.valueOf(num6 == null ? f2.getResourceId(9, R.style.TextAppearance_MaterialComponents_Badge) : num6.intValue());
        Integer num7 = bVar2.f15871i;
        if (num7 != null) {
            this.f15876b.f15871i = num7;
        } else if (f2.hasValue(10)) {
            this.f15876b.f15871i = Integer.valueOf(k0.u(context, f2, 10).getDefaultColor());
        } else {
            int intValue = this.f15876b.f15872v.intValue();
            TypedArray obtainStyledAttributes = context.obtainStyledAttributes(intValue, h.a.f9466x);
            obtainStyledAttributes.getDimension(0, 0.0f);
            ColorStateList u5 = k0.u(context, obtainStyledAttributes, 3);
            k0.u(context, obtainStyledAttributes, 4);
            k0.u(context, obtainStyledAttributes, 5);
            obtainStyledAttributes.getInt(2, 0);
            obtainStyledAttributes.getInt(1, 1);
            int i16 = obtainStyledAttributes.hasValue(12) ? 12 : 10;
            obtainStyledAttributes.getResourceId(i16, 0);
            obtainStyledAttributes.getString(i16);
            obtainStyledAttributes.getBoolean(14, false);
            k0.u(context, obtainStyledAttributes, 6);
            obtainStyledAttributes.getFloat(7, 0.0f);
            obtainStyledAttributes.getFloat(8, 0.0f);
            obtainStyledAttributes.getFloat(9, 0.0f);
            obtainStyledAttributes.recycle();
            TypedArray obtainStyledAttributes2 = context.obtainStyledAttributes(intValue, lg.a.C);
            obtainStyledAttributes2.hasValue(0);
            obtainStyledAttributes2.getFloat(0, 0.0f);
            if (Build.VERSION.SDK_INT >= 26) {
                obtainStyledAttributes2.getString(obtainStyledAttributes2.hasValue(3) ? 3 : 1);
            }
            obtainStyledAttributes2.recycle();
            this.f15876b.f15871i = Integer.valueOf(u5.getDefaultColor());
        }
        b bVar14 = this.f15876b;
        Integer num8 = bVar2.P;
        bVar14.P = Integer.valueOf(num8 == null ? f2.getInt(3, 8388661) : num8.intValue());
        b bVar15 = this.f15876b;
        Integer num9 = bVar2.R;
        bVar15.R = Integer.valueOf(num9 == null ? f2.getDimensionPixelSize(12, resources.getDimensionPixelSize(R.dimen.mtrl_badge_long_text_horizontal_padding)) : num9.intValue());
        b bVar16 = this.f15876b;
        Integer num10 = bVar2.S;
        bVar16.S = Integer.valueOf(num10 == null ? f2.getDimensionPixelSize(11, resources.getDimensionPixelSize(R.dimen.m3_badge_with_text_vertical_padding)) : num10.intValue());
        b bVar17 = this.f15876b;
        Integer num11 = bVar2.T;
        bVar17.T = Integer.valueOf(num11 == null ? f2.getDimensionPixelOffset(19, 0) : num11.intValue());
        b bVar18 = this.f15876b;
        Integer num12 = bVar2.U;
        bVar18.U = Integer.valueOf(num12 == null ? f2.getDimensionPixelOffset(26, 0) : num12.intValue());
        b bVar19 = this.f15876b;
        Integer num13 = bVar2.V;
        bVar19.V = Integer.valueOf(num13 == null ? f2.getDimensionPixelOffset(20, bVar19.T.intValue()) : num13.intValue());
        b bVar20 = this.f15876b;
        Integer num14 = bVar2.W;
        bVar20.W = Integer.valueOf(num14 == null ? f2.getDimensionPixelOffset(27, bVar20.U.intValue()) : num14.intValue());
        b bVar21 = this.f15876b;
        Integer num15 = bVar2.Z;
        bVar21.Z = Integer.valueOf(num15 == null ? f2.getDimensionPixelOffset(21, 0) : num15.intValue());
        b bVar22 = this.f15876b;
        Integer num16 = bVar2.X;
        bVar22.X = Integer.valueOf(num16 == null ? 0 : num16.intValue());
        b bVar23 = this.f15876b;
        Integer num17 = bVar2.Y;
        bVar23.Y = Integer.valueOf(num17 == null ? 0 : num17.intValue());
        b bVar24 = this.f15876b;
        Boolean bool2 = bVar2.a0;
        bVar24.a0 = Boolean.valueOf(bool2 == null ? f2.getBoolean(0, false) : bool2.booleanValue());
        f2.recycle();
        Locale locale = bVar2.K;
        if (locale == null) {
            this.f15876b.K = Locale.getDefault(Locale.Category.FORMAT);
        } else {
            this.f15876b.K = locale;
        }
        this.a = bVar2;
    }

    public final boolean a() {
        return this.f15876b.G != null;
    }
}
