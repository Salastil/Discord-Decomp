package i0;

import androidx.compose.ui.semantics.AppendedSemanticsElement;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.HashSet;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class c0 {
    public final u a;

    /* renamed from: b, reason: collision with root package name */
    public final m f10382b;

    /* renamed from: c, reason: collision with root package name */
    public f0 f10383c;

    /* renamed from: d, reason: collision with root package name */
    public final h0 f10384d;

    /* renamed from: e, reason: collision with root package name */
    public z.e f10385e;

    /* renamed from: f, reason: collision with root package name */
    public v.d f10386f;

    /* renamed from: g, reason: collision with root package name */
    public v.d f10387g;

    /* renamed from: h, reason: collision with root package name */
    public ad.d0 f10388h;

    public c0(u layoutNode) {
        Intrinsics.checkNotNullParameter(layoutNode, "layoutNode");
        this.a = layoutNode;
        m mVar = new m(layoutNode);
        this.f10382b = mVar;
        this.f10383c = mVar;
        h0 h0Var = mVar.O;
        this.f10384d = h0Var;
        this.f10385e = h0Var;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static z.e a(z.d element, z.e eVar) {
        c cVar;
        if (element instanceof AppendedSemanticsElement) {
            Function1 properties = ((AppendedSemanticsElement) element).f1213b;
            Intrinsics.checkNotNullParameter(properties, "properties");
            k0.b node = new k0.b();
            node.f13104i = properties;
            Intrinsics.checkNotNullParameter(node, "node");
            Intrinsics.checkNotNullParameter(node, "node");
            int i5 = node.f21116b;
            if (i5 == 0) {
                i5 = node instanceof g0 ? 1 | 8 : 1;
            }
            node.f21116b = i5;
            cVar = node;
        } else {
            Intrinsics.checkNotNullParameter(element, "element");
            c cVar2 = new c();
            Intrinsics.checkNotNullParameter(element, "element");
            int i6 = element instanceof AppendedSemanticsElement ? 9 : 1;
            if (element instanceof f0.d) {
                i6 |= 16;
            }
            cVar2.f21116b = i6;
            cVar2.f10381i = element;
            cVar2.j = new HashSet();
            cVar = cVar2;
        }
        if (cVar.f21122h) {
            throw new IllegalStateException("A ModifierNodeElement cannot return an already attached node from create() ");
        }
        z.e eVar2 = eVar.f21119e;
        if (eVar2 != null) {
            eVar2.f21118d = cVar;
            cVar.f21119e = eVar2;
        }
        eVar.f21119e = cVar;
        cVar.f21118d = eVar;
        return cVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static z.e b(z.e node) {
        if (node.f21122h) {
            Intrinsics.checkNotNullParameter(node, "node");
            if (!node.f21122h) {
                throw new IllegalStateException("Check failed.");
            }
            Intrinsics.checkNotNullParameter(node, "node");
            int i5 = node.f21116b;
            if ((i5 & 2) != 0 && (node instanceof c)) {
                c cVar = (c) node;
                Intrinsics.checkNotNullParameter(cVar, "<this>");
                k.b(cVar).f();
                k.a(node, 2).H = true;
            }
            if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 && (node instanceof c)) {
                k.b(node).f();
            }
            if ((i5 & 4) != 0 && (node instanceof c)) {
                w.c((c) node);
            }
            if ((i5 & 8) != 0 && (node instanceof g0)) {
                g0 g0Var = (g0) node;
                Intrinsics.checkNotNullParameter(g0Var, "<this>");
                u b10 = k.b(g0Var);
                b10.getClass();
                w.d(b10);
                throw null;
            }
            if ((i5 & 64) != 0 && (node instanceof c)) {
                c cVar2 = (c) node;
                Intrinsics.checkNotNullParameter(cVar2, "<this>");
                z zVar = k.b(cVar2).f10415m;
                zVar.f10434i.E = true;
                x xVar = zVar.j;
                if (xVar != null) {
                    xVar.I = true;
                }
            }
            if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 && (node instanceof c)) {
                f focusProperties = f.a;
                Intrinsics.checkNotNullParameter(focusProperties, "focusProperties");
                throw new IllegalStateException("Check failed.");
            }
            if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 && (node instanceof c)) {
                c cVar3 = (c) node;
                Intrinsics.checkNotNullParameter(cVar3, "<this>");
                k.c(cVar3);
                throw null;
            }
            if (!node.f21122h) {
                throw new IllegalStateException("node detached multiple times");
            }
            if (node.f21120f == null) {
                throw new IllegalStateException("detach invoked on a node without a coordinator");
            }
            if (!node.f21121g) {
                throw new IllegalStateException("Must run runDetachLifecycle() once after runAttachLifecycle() and before markAsDetached()");
            }
            node.f21121g = false;
            node.a();
            if (!node.f21122h) {
                throw new IllegalStateException("Cannot detach a node that is not attached");
            }
            if (node.f21121g) {
                throw new IllegalStateException("Must run runDetachLifecycle() before markAsDetached()");
            }
            node.f21122h = false;
        }
        z.e eVar = node.f21119e;
        z.e eVar2 = node.f21118d;
        if (eVar != null) {
            eVar.f21118d = eVar2;
            node.f21119e = null;
        }
        if (eVar2 != null) {
            eVar2.f21119e = eVar;
            node.f21118d = null;
        }
        Intrinsics.checkNotNull(eVar2);
        return eVar2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void d(z.d dVar, z.d element, z.e node) {
        boolean z5 = dVar instanceof AppendedSemanticsElement;
        f focusProperties = f.a;
        if (z5 && (element instanceof AppendedSemanticsElement)) {
            AppendedSemanticsElement appendedSemanticsElement = (AppendedSemanticsElement) element;
            d0 d0Var = e0.a;
            Intrinsics.checkNotNull(node, "null cannot be cast to non-null type T of androidx.compose.ui.node.NodeChainKt.updateUnsafe");
            appendedSemanticsElement.getClass();
            k0.b node2 = (k0.b) node;
            Intrinsics.checkNotNullParameter(node2, "node");
            node2.getClass();
            Function1 function1 = appendedSemanticsElement.f1213b;
            Intrinsics.checkNotNullParameter(function1, "<set-?>");
            node2.f13104i = function1;
            if (node.f21122h) {
                Intrinsics.checkNotNullParameter(node, "node");
                if (!node.f21122h) {
                    throw new IllegalStateException("Check failed.");
                }
                Intrinsics.checkNotNullParameter(node, "node");
                int i5 = node.f21116b;
                if ((i5 & 2) != 0 && (node instanceof c)) {
                    c cVar = (c) node;
                    Intrinsics.checkNotNullParameter(cVar, "<this>");
                    k.b(cVar).f();
                }
                if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 && (node instanceof c)) {
                    k.b(node).f();
                }
                if ((i5 & 4) != 0 && (node instanceof c)) {
                    w.c((c) node);
                }
                if ((i5 & 8) != 0 && (node instanceof g0)) {
                    g0 g0Var = (g0) node;
                    Intrinsics.checkNotNullParameter(g0Var, "<this>");
                    u b10 = k.b(g0Var);
                    b10.getClass();
                    w.d(b10);
                    throw null;
                }
                if ((i5 & 64) != 0 && (node instanceof c)) {
                    c cVar2 = (c) node;
                    Intrinsics.checkNotNullParameter(cVar2, "<this>");
                    z zVar = k.b(cVar2).f10415m;
                    zVar.f10434i.E = true;
                    x xVar = zVar.j;
                    if (xVar != null) {
                        xVar.I = true;
                    }
                }
                if ((i5 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 && (node instanceof c)) {
                    Intrinsics.checkNotNullParameter(focusProperties, "focusProperties");
                    throw new IllegalStateException("Check failed.");
                }
                if ((i5 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0 || !(node instanceof c)) {
                    return;
                }
                c cVar3 = (c) node;
                Intrinsics.checkNotNullParameter(cVar3, "<this>");
                k.c(cVar3);
                throw null;
            }
            return;
        }
        if (!(node instanceof c)) {
            throw new IllegalStateException("Unknown Modifier.Node type");
        }
        c cVar4 = (c) node;
        Intrinsics.checkNotNullParameter(element, "value");
        boolean z6 = cVar4.f21122h;
        if (z6) {
            if (!z6) {
                throw new IllegalStateException("Check failed.");
            }
            if ((cVar4.f21116b & 8) != 0) {
                k.c(cVar4);
                throw null;
            }
        }
        cVar4.f10381i = element;
        Intrinsics.checkNotNullParameter(element, "element");
        int i6 = element instanceof AppendedSemanticsElement ? 9 : 1;
        if (element instanceof f0.d) {
            i6 |= 16;
        }
        cVar4.f21116b = i6;
        if (cVar4.f21122h) {
            if (!cVar4.f21122h) {
                throw new IllegalStateException("Check failed.");
            }
            z.d dVar2 = cVar4.f10381i;
            if ((cVar4.f21116b & 4) != 0) {
                Intrinsics.checkNotNullParameter(cVar4, "<this>");
                k.a(cVar4, 2).H();
            }
            if ((cVar4.f21116b & 2) != 0) {
                int i10 = e.a;
                h0 h0Var = k.b(cVar4).f10414l.f10384d;
                Intrinsics.checkNotNull(h0Var, "null cannot be cast to non-null type androidx.compose.ui.node.TailModifierNode");
                if (h0Var.f10399i) {
                    f0 f0Var = cVar4.f21120f;
                    Intrinsics.checkNotNull(f0Var);
                    o oVar = (o) f0Var;
                    oVar.getClass();
                    Intrinsics.checkNotNullParameter(cVar4, "<set-?>");
                    oVar.O = cVar4;
                    f0Var.getClass();
                }
                Intrinsics.checkNotNullParameter(cVar4, "<this>");
                k.a(cVar4, 2).H();
                k.b(cVar4).f();
            }
            if ((cVar4.f21116b & 16) != 0 && (dVar2 instanceof f0.d)) {
                ((f0.d) dVar2).getPointerInputFilter().setLayoutCoordinates$ui_release(cVar4.f21120f);
            }
            if ((cVar4.f21116b & 8) != 0) {
                k.c(cVar4);
                throw null;
            }
        }
        if (node.f21122h) {
            Intrinsics.checkNotNullParameter(node, "node");
            if (!node.f21122h) {
                throw new IllegalStateException("Check failed.");
            }
            Intrinsics.checkNotNullParameter(node, "node");
            int i11 = node.f21116b;
            if ((i11 & 2) != 0) {
                c cVar5 = (c) node;
                Intrinsics.checkNotNullParameter(cVar5, "<this>");
                k.b(cVar5).f();
            }
            if ((i11 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0) {
                k.b(node).f();
            }
            if ((i11 & 4) != 0) {
                w.c((c) node);
            }
            if ((i11 & 8) != 0) {
                g0 g0Var2 = (g0) node;
                Intrinsics.checkNotNullParameter(g0Var2, "<this>");
                u b11 = k.b(g0Var2);
                b11.getClass();
                w.d(b11);
                throw null;
            }
            if ((i11 & 64) != 0) {
                c cVar6 = (c) node;
                Intrinsics.checkNotNullParameter(cVar6, "<this>");
                z zVar2 = k.b(cVar6).f10415m;
                zVar2.f10434i.E = true;
                x xVar2 = zVar2.j;
                if (xVar2 != null) {
                    xVar2.I = true;
                }
            }
            if ((i11 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0) {
                Intrinsics.checkNotNullParameter(focusProperties, "focusProperties");
                throw new IllegalStateException("Check failed.");
            }
            if ((i11 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) == 0) {
                return;
            }
            c cVar7 = (c) node;
            Intrinsics.checkNotNullParameter(cVar7, "<this>");
            k.c(cVar7);
            throw null;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:100:0x01d4, code lost:
    
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, "data");
        r14[r34] = r2;
        r15 = 1;
        r14[1] = r28;
        r14[r33] = r24;
        r14[3] = r27;
        r14[4] = 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:102:0x023e, code lost:
    
        r1 = r26 + 2;
        r13 = r29;
     */
    /* JADX WARN: Code restructure failed: missing block: B:107:0x01be, code lost:
    
        r28 = r1;
        r29 = r13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:109:0x019d, code lost:
    
        r27 = r24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:110:0x0188, code lost:
    
        r1 = r18[(r26 + 1) + r19];
        r2 = r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:111:0x017b, code lost:
    
        r26 = r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:112:0x0186, code lost:
    
        r26 = r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:114:0x0245, code lost:
    
        r11 = r11 + 1;
        r15 = r22;
        r13 = r23;
        r2 = r30;
     */
    /* JADX WARN: Code restructure failed: missing block: B:115:0x0161, code lost:
    
        r13 = r34;
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x00e8, code lost:
    
        if (r17[(r13 + 1) + r19] > r17[(r27 - 1) + r19]) goto L30;
     */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x0159, code lost:
    
        r30 = r2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x015d, code lost:
    
        if ((r21 % 2) != 0) goto L57;
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x015f, code lost:
    
        r13 = 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x0163, code lost:
    
        r1 = r15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x0164, code lost:
    
        if (r1 > r11) goto L167;
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x0166, code lost:
    
        if (r1 == r15) goto L67;
     */
    /* JADX WARN: Code restructure failed: missing block: B:77:0x0168, code lost:
    
        if (r1 == r11) goto L65;
     */
    /* JADX WARN: Code restructure failed: missing block: B:78:0x016a, code lost:
    
        r26 = r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:79:0x0178, code lost:
    
        if (r18[(r1 + 1) + r19] >= r18[(r1 - 1) + r19]) goto L66;
     */
    /* JADX WARN: Code restructure failed: missing block: B:80:0x017d, code lost:
    
        r1 = r18[(r26 - 1) + r19];
        r2 = r1 - 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x018f, code lost:
    
        r24 = r7 - ((r3 - r2) - r26);
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x0195, code lost:
    
        if (r11 == 0) goto L74;
     */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x0197, code lost:
    
        if (r2 == r1) goto L73;
     */
    /* JADX WARN: Code restructure failed: missing block: B:84:0x019a, code lost:
    
        r27 = r24 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x019f, code lost:
    
        r24 = r1;
        r1 = r24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x01a5, code lost:
    
        if (r2 <= r10) goto L172;
     */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x01a7, code lost:
    
        if (r1 <= r6) goto L174;
     */
    /* JADX WARN: Code restructure failed: missing block: B:88:0x01a9, code lost:
    
        r28 = r1;
        r29 = r13;
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x01b5, code lost:
    
        if (r0.f(r2 - 1, r28 - 1) == false) goto L173;
     */
    /* JADX WARN: Code restructure failed: missing block: B:90:0x01b7, code lost:
    
        r2 = r2 - 1;
        r1 = r28 - 1;
        r13 = r29;
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x01c2, code lost:
    
        r18[r19 + r26] = r2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:93:0x01c6, code lost:
    
        if (r29 == 0) goto L168;
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x01c8, code lost:
    
        r1 = r21 - r26;
     */
    /* JADX WARN: Code restructure failed: missing block: B:95:0x01ca, code lost:
    
        if (r1 < r15) goto L169;
     */
    /* JADX WARN: Code restructure failed: missing block: B:96:0x01cc, code lost:
    
        if (r1 > r11) goto L170;
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x01d2, code lost:
    
        if (r17[r19 + r1] < r2) goto L171;
     */
    /* JADX WARN: Removed duplicated region for block: B:36:0x012a  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x014f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(int i5, v.d dVar, v.d dVar2, z.e eVar) {
        int i6;
        v.d dVar3;
        v.d dVar4;
        int i10;
        c0 c0Var;
        c0 c0Var2;
        char c6;
        int i11;
        int i12;
        int i13;
        int i14;
        ad.d0 callback = this.f10388h;
        if (callback == null) {
            i6 = i5;
            dVar3 = dVar;
            dVar4 = dVar2;
            callback = new ad.d0(this, eVar, i6, dVar3, dVar4);
            this.f10388h = callback;
        } else {
            i6 = i5;
            dVar3 = dVar;
            dVar4 = dVar2;
            Intrinsics.checkNotNullParameter(eVar, "<set-?>");
            callback.f317e = eVar;
            callback.f316d = i6;
            Intrinsics.checkNotNullParameter(dVar3, "<set-?>");
            callback.f318i = dVar3;
            Intrinsics.checkNotNullParameter(dVar4, "<set-?>");
            callback.f319v = dVar4;
        }
        c0 c0Var3 = (c0) callback.f320w;
        int i15 = dVar3.f19132i - i6;
        int i16 = dVar4.f19132i - i6;
        Intrinsics.checkNotNullParameter(callback, "callback");
        char c8 = 2;
        int i17 = ((i15 + i16) + 1) / 2;
        a5.a0 diagonals = new a5.a0(i17 * 3, 6);
        a5.a0 a0Var = new a5.a0(i17 * 4, 6);
        int i18 = 0;
        a0Var.v(0, i15, 0, i16);
        int i19 = (i17 * 2) + 1;
        int[] data = new int[i19];
        Intrinsics.checkNotNullParameter(data, "data");
        int[] data2 = new int[i19];
        Intrinsics.checkNotNullParameter(data2, "data");
        int[] data3 = new int[5];
        Intrinsics.checkNotNullParameter(data3, "data");
        while (true) {
            int i20 = a0Var.f124e;
            char c10 = c8;
            if (i20 == 0) {
                break;
            }
            int i21 = i18;
            int[] iArr = (int[]) a0Var.f125i;
            int i22 = i20 - 1;
            a0Var.f124e = i22;
            int i23 = iArr[i22];
            int i24 = i20 - 2;
            a0Var.f124e = i24;
            int i25 = iArr[i24];
            int i26 = i19;
            int i27 = i20 - 3;
            a0Var.f124e = i27;
            int i28 = iArr[i27];
            int i29 = i20 - 4;
            a0Var.f124e = i29;
            int i30 = iArr[i29];
            int i31 = i28 - i30;
            int[] iArr2 = data;
            int i32 = i23 - i25;
            int[] iArr3 = data2;
            boolean z5 = true;
            if (i31 < 1 || i32 < 1) {
                c0Var2 = c0Var3;
            } else {
                int i33 = ((i31 + i32) + 1) / 2;
                int i34 = i26 / 2;
                int i35 = i34 + 1;
                iArr2[i35] = i30;
                iArr3[i35] = i28;
                int i36 = i21;
                while (i36 < i33) {
                    int i37 = i31 - i32;
                    int i38 = i33;
                    int i39 = i31;
                    int i40 = -i36;
                    int i41 = Math.abs(i37) % 2 == 1 ? 1 : i21;
                    int i42 = i40;
                    while (true) {
                        if (i42 > i36) {
                            break;
                        }
                        if (i42 != i40) {
                            if (i42 != i36) {
                                i11 = i42;
                            } else {
                                i11 = i42;
                            }
                            i12 = iArr2[(i11 - 1) + i34];
                            i13 = i12 + 1;
                            int i43 = ((i13 - i30) + i25) - i11;
                            int i44 = (i36 == 0 && i13 == i12) ? i43 - 1 : i43;
                            int i45 = i12;
                            i14 = i43;
                            while (i13 < i28 && i14 < i23 && callback.f(i13, i14)) {
                                i13++;
                                i14++;
                            }
                            iArr2[i34 + i11] = i13;
                            if (i41 == 0) {
                                int i46 = i14;
                                int i47 = i37 - i11;
                                c0Var2 = c0Var3;
                                if (i47 >= i40 + 1 && i47 <= i36 - 1 && iArr3[i34 + i47] <= i13) {
                                    Intrinsics.checkNotNullParameter(data3, "data");
                                    data3[i21] = i45;
                                    data3[1] = i44;
                                    data3[c10] = i13;
                                    data3[3] = i46;
                                    data3[4] = i21;
                                    c6 = 1;
                                    break;
                                }
                            } else {
                                c0Var2 = c0Var3;
                            }
                            i42 = i11 + 2;
                            c0Var3 = c0Var2;
                        } else {
                            i11 = i42;
                        }
                        i12 = iArr2[i11 + 1 + i34];
                        i13 = i12;
                        int i432 = ((i13 - i30) + i25) - i11;
                        if (i36 == 0) {
                        }
                        int i452 = i12;
                        i14 = i432;
                        while (i13 < i28) {
                            i13++;
                            i14++;
                        }
                        iArr2[i34 + i11] = i13;
                        if (i41 == 0) {
                        }
                        i42 = i11 + 2;
                        c0Var3 = c0Var2;
                    }
                    if (w.b(data3) > 0) {
                        Intrinsics.checkNotNullParameter(diagonals, "diagonals");
                        int i48 = data3[3];
                        int i49 = data3[c6];
                        int i50 = i48 - i49;
                        int i51 = data3[c10];
                        int i52 = data3[i21];
                        int i53 = i51 - i52;
                        if (i50 == i53) {
                            diagonals.t(i52, i49, i53);
                        } else if (data3[4] != 0) {
                            diagonals.t(i52, i49, w.b(data3));
                        } else if (i50 > i53) {
                            diagonals.t(i52, i49 + 1, w.b(data3));
                        } else {
                            diagonals.t(i52 + 1, i49, w.b(data3));
                        }
                    }
                    z5 = true;
                    a0Var.v(i30, data3[i21], i25, data3[1]);
                    a0Var.v(data3[c10], i28, data3[3], i23);
                }
                c0Var2 = c0Var3;
                z5 = true;
            }
            c8 = c10;
            i18 = i21;
            i19 = i26;
            data = iArr2;
            data2 = iArr3;
            c0Var3 = c0Var2;
        }
        c0 c0Var4 = c0Var3;
        int i54 = i18;
        int i55 = diagonals.f124e;
        if (i55 % 3 != 0) {
            throw new IllegalStateException("Check failed.");
        }
        if (i55 > 3) {
            i10 = i54;
            diagonals.w(i10, i55 - 3);
        } else {
            i10 = i54;
        }
        diagonals.t(i15, i16, i10);
        int i56 = i10;
        int i57 = i56;
        int i58 = i57;
        while (i56 < diagonals.f124e) {
            int[] iArr4 = (int[]) diagonals.f125i;
            int i59 = iArr4[i56];
            int i60 = iArr4[i56 + 2];
            int i61 = i59 - i60;
            int i62 = iArr4[i56 + 1] - i60;
            i56 += 3;
            while (i57 < i61) {
                z.e eVar2 = ((z.e) callback.f317e).f21119e;
                Intrinsics.checkNotNull(eVar2);
                if ((eVar2.f21116b & 2) != 0) {
                    f0 f0Var = eVar2.f21120f;
                    Intrinsics.checkNotNull(f0Var);
                    f0 f0Var2 = f0Var.G;
                    f0 f0Var3 = f0Var.F;
                    Intrinsics.checkNotNull(f0Var3);
                    if (f0Var2 != null) {
                        f0Var2.F = f0Var3;
                    }
                    f0Var3.G = f0Var2;
                    z.e eVar3 = ((z.e) callback.f317e).f21118d;
                    while (eVar3 != null) {
                        if (eVar3 == e0.a) {
                            f0Var3.G = null;
                            c0Var = c0Var4;
                            c0Var.f10383c = f0Var3;
                            break;
                        } else {
                            c0Var = c0Var4;
                            if ((eVar3.f21116b & 2) != 0) {
                                break;
                            }
                            eVar3.f21120f = f0Var3;
                            eVar3 = eVar3.f21118d;
                            c0Var4 = c0Var;
                        }
                    }
                }
                c0Var = c0Var4;
                callback.f317e = b(eVar2);
                i57++;
                c0Var4 = c0Var;
            }
            c0 c0Var5 = c0Var4;
            while (i58 < i62) {
                callback.f317e = a((z.d) ((v.d) callback.f319v).f19130d[callback.f316d + i58], (z.e) callback.f317e);
                i58++;
            }
            while (true) {
                int i63 = i60 - 1;
                if (i60 > 0) {
                    z.e eVar4 = ((z.e) callback.f317e).f21119e;
                    Intrinsics.checkNotNull(eVar4);
                    callback.f317e = eVar4;
                    v.d dVar5 = (v.d) callback.f318i;
                    int i64 = callback.f316d;
                    z.d dVar6 = (z.d) dVar5.f19130d[i64 + i57];
                    z.d dVar7 = (z.d) ((v.d) callback.f319v).f19130d[i64 + i58];
                    if (!Intrinsics.areEqual(dVar6, dVar7)) {
                        d(dVar6, dVar7, (z.e) callback.f317e);
                    }
                    i57++;
                    i58++;
                    i60 = i63;
                }
            }
            c0Var4 = c0Var5;
        }
        int i65 = i10;
        for (z.e eVar5 = this.f10384d.f21118d; eVar5 != null && eVar5 != e0.a; eVar5 = eVar5.f21118d) {
            i65 |= eVar5.f21116b;
            eVar5.f21117c = i65;
        }
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("[");
        z.e eVar = this.f10385e;
        h0 h0Var = this.f10384d;
        if (eVar != h0Var) {
            while (true) {
                if (eVar == null || eVar == h0Var) {
                    break;
                }
                sb2.append(String.valueOf(eVar));
                if (eVar.f21119e == h0Var) {
                    sb2.append("]");
                    break;
                }
                sb2.append(",");
                eVar = eVar.f21119e;
            }
        } else {
            sb2.append("]");
        }
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "StringBuilder().apply(builderAction).toString()");
        return sb3;
    }
}
