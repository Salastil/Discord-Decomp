package com.google.android.flexbox;

import android.graphics.drawable.Drawable;
import android.util.SparseIntArray;
import android.view.View;
import android.view.ViewGroup;
import android.widget.CompoundButton;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import k0.d;
import oe.b;
import oe.c;

/* loaded from: classes3.dex */
public final class FlexboxHelper {
    public final oe.a a;

    /* renamed from: b, reason: collision with root package name */
    public boolean[] f5595b;

    /* renamed from: c, reason: collision with root package name */
    public int[] f5596c;

    /* renamed from: d, reason: collision with root package name */
    public long[] f5597d;

    /* renamed from: e, reason: collision with root package name */
    public long[] f5598e;

    public static class FlexLinesResult {
        public List a;

        /* renamed from: b, reason: collision with root package name */
        public int f5599b;
    }

    public FlexboxHelper(oe.a aVar) {
        this.a = aVar;
    }

    public static ArrayList e(List list, int i5, int i6) {
        int i10 = (i5 - i6) / 2;
        ArrayList arrayList = new ArrayList();
        FlexLine flexLine = new FlexLine();
        flexLine.f5585g = i10;
        int size = list.size();
        for (int i11 = 0; i11 < size; i11++) {
            if (i11 == 0) {
                arrayList.add(flexLine);
            }
            arrayList.add((FlexLine) list.get(i11));
            if (i11 == list.size() - 1) {
                arrayList.add(flexLine);
            }
        }
        return arrayList;
    }

    public static int[] r(int i5, ArrayList arrayList, SparseIntArray sparseIntArray) {
        Collections.sort(arrayList);
        sparseIntArray.clear();
        int[] iArr = new int[i5];
        Iterator it = arrayList.iterator();
        int i6 = 0;
        while (it.hasNext()) {
            c cVar = (c) it.next();
            int i10 = cVar.f15837d;
            iArr[i6] = i10;
            sparseIntArray.append(i10, cVar.f15838e);
            i6++;
        }
        return iArr;
    }

    public final void a(List list, FlexLine flexLine, int i5, int i6) {
        flexLine.f5589m = i6;
        this.a.onNewFlexLineAdded(flexLine);
        flexLine.f5592p = i5;
        list.add(flexLine);
    }

    /* JADX WARN: Code restructure failed: missing block: B:166:0x01f6, code lost:
    
        if (r8 < (r9 + r14)) goto L100;
     */
    /* JADX WARN: Removed duplicated region for block: B:100:0x0322  */
    /* JADX WARN: Removed duplicated region for block: B:106:0x0355  */
    /* JADX WARN: Removed duplicated region for block: B:111:0x0366  */
    /* JADX WARN: Removed duplicated region for block: B:120:0x038b A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:130:0x030a  */
    /* JADX WARN: Removed duplicated region for block: B:131:0x02fe  */
    /* JADX WARN: Removed duplicated region for block: B:132:0x02f3  */
    /* JADX WARN: Removed duplicated region for block: B:133:0x02ce  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x02c1  */
    /* JADX WARN: Removed duplicated region for block: B:135:0x02b6  */
    /* JADX WARN: Removed duplicated region for block: B:136:0x029f  */
    /* JADX WARN: Removed duplicated region for block: B:137:0x028f  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x028d  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x029d  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x02a7  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x02b1  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x02bc  */
    /* JADX WARN: Removed duplicated region for block: B:89:0x02c9  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x02ee  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x02f9  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x0305  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void b(FlexLinesResult flexLinesResult, int i5, int i6, int i10, int i11, int i12, List list) {
        List list2;
        int i13;
        int childHeightMeasureSpec;
        b bVar;
        int i14;
        int[] iArr;
        boolean z5;
        int i15 = i5;
        oe.a aVar = this.a;
        boolean isMainAxisDirectionHorizontal = aVar.isMainAxisDirectionHorizontal();
        int mode = View.MeasureSpec.getMode(i15);
        int size = View.MeasureSpec.getSize(i15);
        List arrayList = list == null ? new ArrayList() : list;
        flexLinesResult.a = arrayList;
        boolean z6 = i12 == -1;
        int paddingStart = isMainAxisDirectionHorizontal ? aVar.getPaddingStart() : aVar.getPaddingTop();
        int paddingEnd = isMainAxisDirectionHorizontal ? aVar.getPaddingEnd() : aVar.getPaddingBottom();
        int paddingTop = isMainAxisDirectionHorizontal ? aVar.getPaddingTop() : aVar.getPaddingStart();
        int paddingBottom = isMainAxisDirectionHorizontal ? aVar.getPaddingBottom() : aVar.getPaddingEnd();
        FlexLine flexLine = new FlexLine();
        int i16 = i11;
        int i17 = 1;
        flexLine.f5591o = i16;
        int i18 = paddingStart + paddingEnd;
        flexLine.f5583e = i18;
        int flexItemCount = aVar.getFlexItemCount();
        boolean z7 = z6;
        int i19 = Integer.MIN_VALUE;
        int i20 = 0;
        int i21 = 0;
        int i22 = 0;
        while (i16 < flexItemCount) {
            int i23 = flexItemCount;
            View reorderedFlexItemAt = aVar.getReorderedFlexItemAt(i16);
            if (reorderedFlexItemAt == null) {
                if (i16 == i23 - 1 && flexLine.a() != 0) {
                    a(arrayList, flexLine, i16, i21);
                }
            } else if (reorderedFlexItemAt.getVisibility() == 8) {
                flexLine.f5587i++;
                flexLine.f5586h++;
                if (i16 == i23 - 1 && flexLine.a() != 0) {
                    a(arrayList, flexLine, i16, i21);
                }
            } else {
                if (reorderedFlexItemAt instanceof CompoundButton) {
                    CompoundButton compoundButton = (CompoundButton) reorderedFlexItemAt;
                    b bVar2 = (b) compoundButton.getLayoutParams();
                    int e9 = bVar2.e();
                    i13 = i18;
                    int q5 = bVar2.q();
                    Drawable buttonDrawable = compoundButton.getButtonDrawable();
                    int minimumWidth = buttonDrawable == null ? 0 : buttonDrawable.getMinimumWidth();
                    int minimumHeight = buttonDrawable == null ? 0 : buttonDrawable.getMinimumHeight();
                    list2 = arrayList;
                    if (e9 == -1) {
                        e9 = minimumWidth;
                    }
                    bVar2.f(e9);
                    if (q5 == -1) {
                        q5 = minimumHeight;
                    }
                    bVar2.l(q5);
                } else {
                    list2 = arrayList;
                    i13 = i18;
                }
                b bVar3 = (b) reorderedFlexItemAt.getLayoutParams();
                if (bVar3.b() == 4) {
                    flexLine.f5590n.add(Integer.valueOf(i16));
                }
                int width = isMainAxisDirectionHorizontal ? bVar3.getWidth() : bVar3.getHeight();
                if (bVar3.n() != -1.0f && mode == 1073741824) {
                    width = Math.round(bVar3.n() * size);
                }
                if (isMainAxisDirectionHorizontal) {
                    childHeightMeasureSpec = aVar.getChildWidthMeasureSpec(i15, bVar3.p() + bVar3.j() + i13, width);
                    int childHeightMeasureSpec2 = aVar.getChildHeightMeasureSpec(i6, bVar3.g() + bVar3.k() + paddingTop + paddingBottom + i21, bVar3.getHeight());
                    reorderedFlexItemAt.measure(childHeightMeasureSpec, childHeightMeasureSpec2);
                    v(i16, childHeightMeasureSpec, childHeightMeasureSpec2, reorderedFlexItemAt);
                } else {
                    int childWidthMeasureSpec = aVar.getChildWidthMeasureSpec(i6, bVar3.p() + bVar3.j() + paddingTop + paddingBottom + i21, bVar3.getWidth());
                    childHeightMeasureSpec = aVar.getChildHeightMeasureSpec(i15, bVar3.g() + bVar3.k() + i13, width);
                    reorderedFlexItemAt.measure(childWidthMeasureSpec, childHeightMeasureSpec);
                    v(i16, childWidthMeasureSpec, childHeightMeasureSpec, reorderedFlexItemAt);
                }
                aVar.updateViewCache(i16, reorderedFlexItemAt);
                c(i16, reorderedFlexItemAt);
                i20 = View.combineMeasuredStates(i20, reorderedFlexItemAt.getMeasuredState());
                int i24 = flexLine.f5583e;
                int measuredWidth = (isMainAxisDirectionHorizontal ? reorderedFlexItemAt.getMeasuredWidth() : reorderedFlexItemAt.getMeasuredHeight()) + (isMainAxisDirectionHorizontal ? bVar3.j() : bVar3.k()) + (isMainAxisDirectionHorizontal ? bVar3.p() : bVar3.g());
                int size2 = list2.size();
                if (aVar.getFlexWrap() != 0) {
                    if (bVar3.r()) {
                        bVar = bVar3;
                    } else if (mode != 0) {
                        bVar = bVar3;
                        int maxLine = aVar.getMaxLine();
                        if (maxLine == -1 || maxLine > size2 + 1) {
                            int decorationLengthMainAxis = aVar.getDecorationLengthMainAxis(reorderedFlexItemAt, i16, i22);
                            if (decorationLengthMainAxis > 0) {
                                measuredWidth += decorationLengthMainAxis;
                            }
                        }
                        i18 = i13;
                        arrayList = list2;
                        flexLine.f5586h += i17;
                        i22++;
                        i14 = i19;
                        flexLine.f5593q |= bVar.m() != 0.0f;
                        flexLine.f5594r |= bVar.c() != 0.0f;
                        iArr = this.f5596c;
                        if (iArr != null) {
                            iArr[i16] = arrayList.size();
                        }
                        flexLine.f5583e = (isMainAxisDirectionHorizontal ? reorderedFlexItemAt.getMeasuredWidth() : reorderedFlexItemAt.getMeasuredHeight()) + (isMainAxisDirectionHorizontal ? bVar.j() : bVar.k()) + (isMainAxisDirectionHorizontal ? bVar.p() : bVar.g()) + flexLine.f5583e;
                        flexLine.j = bVar.m() + flexLine.j;
                        flexLine.k = bVar.c() + flexLine.k;
                        aVar.onNewFlexItemAdded(reorderedFlexItemAt, i16, i22, flexLine);
                        int max = Math.max(i14, aVar.getDecorationLengthCrossAxis(reorderedFlexItemAt) + (isMainAxisDirectionHorizontal ? reorderedFlexItemAt.getMeasuredHeight() : reorderedFlexItemAt.getMeasuredWidth()) + (isMainAxisDirectionHorizontal ? bVar.k() : bVar.j()) + (isMainAxisDirectionHorizontal ? bVar.g() : bVar.p()));
                        flexLine.f5585g = Math.max(flexLine.f5585g, max);
                        if (isMainAxisDirectionHorizontal) {
                            if (aVar.getFlexWrap() != 2) {
                                flexLine.f5588l = Math.max(flexLine.f5588l, bVar.k() + reorderedFlexItemAt.getBaseline());
                            } else {
                                flexLine.f5588l = Math.max(flexLine.f5588l, bVar.g() + (reorderedFlexItemAt.getMeasuredHeight() - reorderedFlexItemAt.getBaseline()));
                            }
                        }
                        if (i16 == i23 - 1 && flexLine.a() != 0) {
                            a(arrayList, flexLine, i16, i21);
                            i21 += flexLine.f5585g;
                        }
                        if (i12 == -1 && arrayList.size() > 0) {
                            if (((FlexLine) d.g(1, arrayList)).f5592p >= i12 && i16 >= i12 && !z7) {
                                i21 = -flexLine.f5585g;
                                z5 = true;
                                if (i21 <= i10 && z5) {
                                    break;
                                }
                                i19 = max;
                                i16++;
                                z7 = z5;
                                flexItemCount = i23;
                                i17 = 1;
                                i15 = i5;
                            }
                        }
                        z5 = z7;
                        if (i21 <= i10) {
                        }
                        i19 = max;
                        i16++;
                        z7 = z5;
                        flexItemCount = i23;
                        i17 = 1;
                        i15 = i5;
                    }
                    if (flexLine.a() > 0) {
                        arrayList = list2;
                        a(arrayList, flexLine, i16 > 0 ? i16 - 1 : 0, i21);
                        i21 += flexLine.f5585g;
                    } else {
                        arrayList = list2;
                    }
                    if (isMainAxisDirectionHorizontal) {
                        if (bVar.getHeight() == -1) {
                            reorderedFlexItemAt.measure(childHeightMeasureSpec, aVar.getChildHeightMeasureSpec(i6, bVar.g() + bVar.k() + aVar.getPaddingBottom() + aVar.getPaddingTop() + i21, bVar.getHeight()));
                            c(i16, reorderedFlexItemAt);
                        }
                    } else if (bVar.getWidth() == -1) {
                        reorderedFlexItemAt.measure(aVar.getChildWidthMeasureSpec(i6, bVar.p() + bVar.j() + aVar.getPaddingRight() + aVar.getPaddingLeft() + i21, bVar.getWidth()), childHeightMeasureSpec);
                        c(i16, reorderedFlexItemAt);
                    }
                    flexLine = new FlexLine();
                    flexLine.f5586h = i17;
                    i18 = i13;
                    flexLine.f5583e = i18;
                    flexLine.f5591o = i16;
                    i14 = Integer.MIN_VALUE;
                    i22 = 0;
                    flexLine.f5593q |= bVar.m() != 0.0f;
                    flexLine.f5594r |= bVar.c() != 0.0f;
                    iArr = this.f5596c;
                    if (iArr != null) {
                    }
                    flexLine.f5583e = (isMainAxisDirectionHorizontal ? reorderedFlexItemAt.getMeasuredWidth() : reorderedFlexItemAt.getMeasuredHeight()) + (isMainAxisDirectionHorizontal ? bVar.j() : bVar.k()) + (isMainAxisDirectionHorizontal ? bVar.p() : bVar.g()) + flexLine.f5583e;
                    flexLine.j = bVar.m() + flexLine.j;
                    flexLine.k = bVar.c() + flexLine.k;
                    aVar.onNewFlexItemAdded(reorderedFlexItemAt, i16, i22, flexLine);
                    int max2 = Math.max(i14, aVar.getDecorationLengthCrossAxis(reorderedFlexItemAt) + (isMainAxisDirectionHorizontal ? reorderedFlexItemAt.getMeasuredHeight() : reorderedFlexItemAt.getMeasuredWidth()) + (isMainAxisDirectionHorizontal ? bVar.k() : bVar.j()) + (isMainAxisDirectionHorizontal ? bVar.g() : bVar.p()));
                    flexLine.f5585g = Math.max(flexLine.f5585g, max2);
                    if (isMainAxisDirectionHorizontal) {
                    }
                    if (i16 == i23 - 1) {
                        a(arrayList, flexLine, i16, i21);
                        i21 += flexLine.f5585g;
                    }
                    if (i12 == -1) {
                    }
                    z5 = z7;
                    if (i21 <= i10) {
                    }
                    i19 = max2;
                    i16++;
                    z7 = z5;
                    flexItemCount = i23;
                    i17 = 1;
                    i15 = i5;
                }
                bVar = bVar3;
                i18 = i13;
                arrayList = list2;
                flexLine.f5586h += i17;
                i22++;
                i14 = i19;
                flexLine.f5593q |= bVar.m() != 0.0f;
                flexLine.f5594r |= bVar.c() != 0.0f;
                iArr = this.f5596c;
                if (iArr != null) {
                }
                flexLine.f5583e = (isMainAxisDirectionHorizontal ? reorderedFlexItemAt.getMeasuredWidth() : reorderedFlexItemAt.getMeasuredHeight()) + (isMainAxisDirectionHorizontal ? bVar.j() : bVar.k()) + (isMainAxisDirectionHorizontal ? bVar.p() : bVar.g()) + flexLine.f5583e;
                flexLine.j = bVar.m() + flexLine.j;
                flexLine.k = bVar.c() + flexLine.k;
                aVar.onNewFlexItemAdded(reorderedFlexItemAt, i16, i22, flexLine);
                int max22 = Math.max(i14, aVar.getDecorationLengthCrossAxis(reorderedFlexItemAt) + (isMainAxisDirectionHorizontal ? reorderedFlexItemAt.getMeasuredHeight() : reorderedFlexItemAt.getMeasuredWidth()) + (isMainAxisDirectionHorizontal ? bVar.k() : bVar.j()) + (isMainAxisDirectionHorizontal ? bVar.g() : bVar.p()));
                flexLine.f5585g = Math.max(flexLine.f5585g, max22);
                if (isMainAxisDirectionHorizontal) {
                }
                if (i16 == i23 - 1) {
                }
                if (i12 == -1) {
                }
                z5 = z7;
                if (i21 <= i10) {
                }
                i19 = max22;
                i16++;
                z7 = z5;
                flexItemCount = i23;
                i17 = 1;
                i15 = i5;
            }
            z5 = z7;
            i16++;
            z7 = z5;
            flexItemCount = i23;
            i17 = 1;
            i15 = i5;
        }
        flexLinesResult.f5599b = i20;
    }

    /* JADX WARN: Removed duplicated region for block: B:12:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0032  */
    /* JADX WARN: Removed duplicated region for block: B:7:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0040  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(int i5, View view) {
        boolean z5;
        b bVar = (b) view.getLayoutParams();
        int measuredWidth = view.getMeasuredWidth();
        int measuredHeight = view.getMeasuredHeight();
        boolean z6 = true;
        if (measuredWidth < bVar.e()) {
            measuredWidth = bVar.e();
        } else {
            if (measuredWidth <= bVar.u()) {
                z5 = false;
                if (measuredHeight >= bVar.q()) {
                    measuredHeight = bVar.q();
                } else if (measuredHeight > bVar.s()) {
                    measuredHeight = bVar.s();
                } else {
                    z6 = z5;
                }
                if (z6) {
                    return;
                }
                int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(measuredWidth, 1073741824);
                int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(measuredHeight, 1073741824);
                view.measure(makeMeasureSpec, makeMeasureSpec2);
                v(i5, makeMeasureSpec, makeMeasureSpec2, view);
                this.a.updateViewCache(i5, view);
                return;
            }
            measuredWidth = bVar.u();
        }
        z5 = true;
        if (measuredHeight >= bVar.q()) {
        }
        if (z6) {
        }
    }

    public final void d(int i5, List list) {
        int i6 = this.f5596c[i5];
        if (i6 == -1) {
            i6 = 0;
        }
        if (list.size() > i6) {
            list.subList(i6, list.size()).clear();
        }
        int[] iArr = this.f5596c;
        int length = iArr.length - 1;
        if (i5 > length) {
            Arrays.fill(iArr, -1);
        } else {
            Arrays.fill(iArr, i5, length, -1);
        }
        long[] jArr = this.f5597d;
        int length2 = jArr.length - 1;
        if (i5 > length2) {
            Arrays.fill(jArr, 0L);
        } else {
            Arrays.fill(jArr, i5, length2, 0L);
        }
    }

    public final ArrayList f(int i5) {
        ArrayList arrayList = new ArrayList(i5);
        for (int i6 = 0; i6 < i5; i6++) {
            b bVar = (b) this.a.getFlexItemAt(i6).getLayoutParams();
            c cVar = new c();
            cVar.f15838e = bVar.getOrder();
            cVar.f15837d = i6;
            arrayList.add(cVar);
        }
        return arrayList;
    }

    public final void g(int i5, int i6, int i10) {
        int mode;
        int size;
        oe.a aVar = this.a;
        int flexDirection = aVar.getFlexDirection();
        if (flexDirection == 0 || flexDirection == 1) {
            mode = View.MeasureSpec.getMode(i6);
            size = View.MeasureSpec.getSize(i6);
        } else {
            if (flexDirection != 2 && flexDirection != 3) {
                throw new IllegalArgumentException(d.i(flexDirection, "Invalid flex direction: "));
            }
            mode = View.MeasureSpec.getMode(i5);
            size = View.MeasureSpec.getSize(i5);
        }
        List<FlexLine> flexLinesInternal = aVar.getFlexLinesInternal();
        if (mode == 1073741824) {
            int sumOfCrossSize = aVar.getSumOfCrossSize() + i10;
            int i11 = 0;
            if (flexLinesInternal.size() == 1) {
                ((FlexLine) flexLinesInternal.get(0)).f5585g = size - i10;
                return;
            }
            if (flexLinesInternal.size() >= 2) {
                int alignContent = aVar.getAlignContent();
                if (alignContent == 1) {
                    FlexLine flexLine = new FlexLine();
                    flexLine.f5585g = size - sumOfCrossSize;
                    flexLinesInternal.add(0, flexLine);
                    return;
                }
                if (alignContent == 2) {
                    aVar.setFlexLines(e(flexLinesInternal, size, sumOfCrossSize));
                    return;
                }
                if (alignContent == 3) {
                    if (sumOfCrossSize >= size) {
                        return;
                    }
                    float size2 = (size - sumOfCrossSize) / (flexLinesInternal.size() - 1);
                    ArrayList arrayList = new ArrayList();
                    int size3 = flexLinesInternal.size();
                    float f2 = 0.0f;
                    while (i11 < size3) {
                        arrayList.add((FlexLine) flexLinesInternal.get(i11));
                        if (i11 != flexLinesInternal.size() - 1) {
                            FlexLine flexLine2 = new FlexLine();
                            if (i11 == flexLinesInternal.size() - 2) {
                                flexLine2.f5585g = Math.round(f2 + size2);
                                f2 = 0.0f;
                            } else {
                                flexLine2.f5585g = Math.round(size2);
                            }
                            int i12 = flexLine2.f5585g;
                            float f10 = (size2 - i12) + f2;
                            if (f10 > 1.0f) {
                                flexLine2.f5585g = i12 + 1;
                                f10 -= 1.0f;
                            } else if (f10 < -1.0f) {
                                flexLine2.f5585g = i12 - 1;
                                f10 += 1.0f;
                            }
                            f2 = f10;
                            arrayList.add(flexLine2);
                        }
                        i11++;
                    }
                    aVar.setFlexLines(arrayList);
                    return;
                }
                if (alignContent == 4) {
                    if (sumOfCrossSize >= size) {
                        aVar.setFlexLines(e(flexLinesInternal, size, sumOfCrossSize));
                        return;
                    }
                    int size4 = (size - sumOfCrossSize) / (flexLinesInternal.size() * 2);
                    ArrayList arrayList2 = new ArrayList();
                    FlexLine flexLine3 = new FlexLine();
                    flexLine3.f5585g = size4;
                    for (FlexLine flexLine4 : flexLinesInternal) {
                        arrayList2.add(flexLine3);
                        arrayList2.add(flexLine4);
                        arrayList2.add(flexLine3);
                    }
                    aVar.setFlexLines(arrayList2);
                    return;
                }
                if (alignContent == 5 && sumOfCrossSize < size) {
                    float size5 = (size - sumOfCrossSize) / flexLinesInternal.size();
                    int size6 = flexLinesInternal.size();
                    float f11 = 0.0f;
                    while (i11 < size6) {
                        FlexLine flexLine5 = (FlexLine) flexLinesInternal.get(i11);
                        float f12 = flexLine5.f5585g + size5;
                        if (i11 == flexLinesInternal.size() - 1) {
                            f12 += f11;
                            f11 = 0.0f;
                        }
                        int round = Math.round(f12);
                        float f13 = (f12 - round) + f11;
                        if (f13 > 1.0f) {
                            round++;
                            f13 -= 1.0f;
                        } else if (f13 < -1.0f) {
                            round--;
                            f13 += 1.0f;
                        }
                        f11 = f13;
                        flexLine5.f5585g = round;
                        i11++;
                    }
                }
            }
        }
    }

    public final void h(int i5, int i6, int i10) {
        int size;
        int paddingLeft;
        int paddingRight;
        int i11;
        int i12;
        oe.a aVar = this.a;
        int flexItemCount = aVar.getFlexItemCount();
        boolean[] zArr = this.f5595b;
        if (zArr == null) {
            this.f5595b = new boolean[Math.max(flexItemCount, 10)];
        } else if (zArr.length < flexItemCount) {
            this.f5595b = new boolean[Math.max(zArr.length * 2, flexItemCount)];
        } else {
            Arrays.fill(zArr, false);
        }
        if (i10 >= aVar.getFlexItemCount()) {
            return;
        }
        int flexDirection = aVar.getFlexDirection();
        int flexDirection2 = aVar.getFlexDirection();
        if (flexDirection2 == 0 || flexDirection2 == 1) {
            int mode = View.MeasureSpec.getMode(i5);
            size = View.MeasureSpec.getSize(i5);
            int largestMainSize = aVar.getLargestMainSize();
            if (mode != 1073741824) {
                size = Math.min(largestMainSize, size);
            }
            paddingLeft = aVar.getPaddingLeft();
            paddingRight = aVar.getPaddingRight();
        } else {
            if (flexDirection2 != 2 && flexDirection2 != 3) {
                throw new IllegalArgumentException(d.i(flexDirection, "Invalid flex direction: "));
            }
            int mode2 = View.MeasureSpec.getMode(i6);
            size = View.MeasureSpec.getSize(i6);
            if (mode2 != 1073741824) {
                size = aVar.getLargestMainSize();
            }
            paddingLeft = aVar.getPaddingTop();
            paddingRight = aVar.getPaddingBottom();
        }
        int i13 = paddingRight + paddingLeft;
        int i14 = size;
        int[] iArr = this.f5596c;
        int i15 = iArr != null ? iArr[i10] : 0;
        List flexLinesInternal = aVar.getFlexLinesInternal();
        int size2 = flexLinesInternal.size();
        while (i15 < size2) {
            FlexLine flexLine = (FlexLine) flexLinesInternal.get(i15);
            int i16 = flexLine.f5583e;
            if (i16 >= i14 || !flexLine.f5593q) {
                i11 = i5;
                i12 = i6;
                if (i16 > i14 && flexLine.f5594r) {
                    q(i11, i12, flexLine, i14, i13, false);
                }
            } else {
                i11 = i5;
                i12 = i6;
                l(i11, i12, flexLine, i14, i13, false);
            }
            i15++;
            i5 = i11;
            i6 = i12;
        }
    }

    public final void i(int i5) {
        int[] iArr = this.f5596c;
        if (iArr == null) {
            this.f5596c = new int[Math.max(i5, 10)];
        } else if (iArr.length < i5) {
            this.f5596c = Arrays.copyOf(this.f5596c, Math.max(iArr.length * 2, i5));
        }
    }

    public final void j(int i5) {
        long[] jArr = this.f5597d;
        if (jArr == null) {
            this.f5597d = new long[Math.max(i5, 10)];
        } else if (jArr.length < i5) {
            this.f5597d = Arrays.copyOf(this.f5597d, Math.max(jArr.length * 2, i5));
        }
    }

    public final void k(int i5) {
        long[] jArr = this.f5598e;
        if (jArr == null) {
            this.f5598e = new long[Math.max(i5, 10)];
        } else if (jArr.length < i5) {
            this.f5598e = Arrays.copyOf(this.f5598e, Math.max(jArr.length * 2, i5));
        }
    }

    public final void l(int i5, int i6, FlexLine flexLine, int i10, int i11, boolean z5) {
        int i12;
        float f2;
        int i13;
        float f10;
        int i14;
        double d6;
        boolean z6;
        double d7;
        float f11 = flexLine.j;
        float f12 = 0.0f;
        if (f11 <= 0.0f || i10 < (i12 = flexLine.f5583e)) {
            return;
        }
        float f13 = (i10 - i12) / f11;
        flexLine.f5583e = i11 + flexLine.f5584f;
        if (!z5) {
            flexLine.f5585g = Integer.MIN_VALUE;
        }
        int i15 = 0;
        boolean z7 = false;
        int i16 = 0;
        float f14 = 0.0f;
        while (i15 < flexLine.f5586h) {
            int i17 = flexLine.f5591o + i15;
            oe.a aVar = this.a;
            View reorderedFlexItemAt = aVar.getReorderedFlexItemAt(i17);
            if (reorderedFlexItemAt == null || reorderedFlexItemAt.getVisibility() == 8) {
                f2 = f12;
                i13 = i12;
                f10 = f13;
                z7 = z7;
            } else {
                b bVar = (b) reorderedFlexItemAt.getLayoutParams();
                int flexDirection = aVar.getFlexDirection();
                f2 = f12;
                if (flexDirection == 0 || flexDirection == 1) {
                    i13 = i12;
                    f10 = f13;
                    boolean z8 = z7;
                    int measuredWidth = reorderedFlexItemAt.getMeasuredWidth();
                    long[] jArr = this.f5598e;
                    if (jArr != null) {
                        measuredWidth = (int) jArr[i17];
                    }
                    int measuredHeight = reorderedFlexItemAt.getMeasuredHeight();
                    long[] jArr2 = this.f5598e;
                    if (jArr2 != null) {
                        measuredHeight = (int) (jArr2[i17] >> 32);
                    }
                    if (this.f5595b[i17] || bVar.m() <= f2) {
                        z7 = z8;
                    } else {
                        float m5 = (bVar.m() * f10) + measuredWidth;
                        if (i15 == flexLine.f5586h - 1) {
                            m5 += f14;
                            f14 = f2;
                        }
                        int round = Math.round(m5);
                        if (round > bVar.u()) {
                            round = bVar.u();
                            this.f5595b[i17] = true;
                            flexLine.j -= bVar.m();
                            z7 = true;
                        } else {
                            float f15 = (m5 - round) + f14;
                            double d8 = f15;
                            if (d8 > 1.0d) {
                                round++;
                                d6 = d8 - 1.0d;
                            } else {
                                if (d8 < -1.0d) {
                                    round--;
                                    d6 = d8 + 1.0d;
                                }
                                f14 = f15;
                                z7 = z8;
                            }
                            f15 = (float) d6;
                            f14 = f15;
                            z7 = z8;
                        }
                        int m6 = m(i6, bVar, flexLine.f5589m);
                        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(round, 1073741824);
                        reorderedFlexItemAt.measure(makeMeasureSpec, m6);
                        int measuredWidth2 = reorderedFlexItemAt.getMeasuredWidth();
                        int measuredHeight2 = reorderedFlexItemAt.getMeasuredHeight();
                        v(i17, makeMeasureSpec, m6, reorderedFlexItemAt);
                        aVar.updateViewCache(i17, reorderedFlexItemAt);
                        measuredWidth = measuredWidth2;
                        measuredHeight = measuredHeight2;
                    }
                    int max = Math.max(i16, aVar.getDecorationLengthCrossAxis(reorderedFlexItemAt) + bVar.g() + bVar.k() + measuredHeight);
                    flexLine.f5583e = bVar.p() + bVar.j() + measuredWidth + flexLine.f5583e;
                    i14 = max;
                } else {
                    int measuredHeight3 = reorderedFlexItemAt.getMeasuredHeight();
                    long[] jArr3 = this.f5598e;
                    if (jArr3 != null) {
                        long j = jArr3[i17];
                        f10 = f13;
                        z6 = z7;
                        measuredHeight3 = (int) (j >> 32);
                    } else {
                        f10 = f13;
                        z6 = z7;
                    }
                    int measuredWidth3 = reorderedFlexItemAt.getMeasuredWidth();
                    long[] jArr4 = this.f5598e;
                    if (jArr4 != null) {
                        measuredWidth3 = (int) jArr4[i17];
                    }
                    if (this.f5595b[i17] || bVar.m() <= f2) {
                        i13 = i12;
                        z7 = z6;
                    } else {
                        float m7 = (bVar.m() * f10) + measuredHeight3;
                        if (i15 == flexLine.f5586h - 1) {
                            m7 += f14;
                            f14 = f2;
                        }
                        int round2 = Math.round(m7);
                        if (round2 > bVar.s()) {
                            round2 = bVar.s();
                            this.f5595b[i17] = true;
                            flexLine.j -= bVar.m();
                            z7 = true;
                            i13 = i12;
                        } else {
                            float f16 = (m7 - round2) + f14;
                            i13 = i12;
                            double d10 = f16;
                            if (d10 > 1.0d) {
                                round2++;
                                d7 = d10 - 1.0d;
                            } else if (d10 < -1.0d) {
                                round2--;
                                d7 = d10 + 1.0d;
                            } else {
                                f14 = f16;
                                z7 = z6;
                            }
                            f14 = (float) d7;
                            z7 = z6;
                        }
                        int n6 = n(i5, bVar, flexLine.f5589m);
                        int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(round2, 1073741824);
                        reorderedFlexItemAt.measure(n6, makeMeasureSpec2);
                        int measuredWidth4 = reorderedFlexItemAt.getMeasuredWidth();
                        int measuredHeight4 = reorderedFlexItemAt.getMeasuredHeight();
                        v(i17, n6, makeMeasureSpec2, reorderedFlexItemAt);
                        aVar.updateViewCache(i17, reorderedFlexItemAt);
                        measuredWidth3 = measuredWidth4;
                        measuredHeight3 = measuredHeight4;
                    }
                    i14 = Math.max(i16, aVar.getDecorationLengthCrossAxis(reorderedFlexItemAt) + bVar.p() + bVar.j() + measuredWidth3);
                    flexLine.f5583e = bVar.g() + bVar.k() + measuredHeight3 + flexLine.f5583e;
                }
                flexLine.f5585g = Math.max(flexLine.f5585g, i14);
                i16 = i14;
            }
            i15++;
            f13 = f10;
            f12 = f2;
            i12 = i13;
        }
        int i18 = i12;
        if (!z7 || i18 == flexLine.f5583e) {
            return;
        }
        l(i5, i6, flexLine, i10, i11, true);
    }

    public final int m(int i5, b bVar, int i6) {
        oe.a aVar = this.a;
        int childHeightMeasureSpec = aVar.getChildHeightMeasureSpec(i5, bVar.g() + bVar.k() + aVar.getPaddingBottom() + aVar.getPaddingTop() + i6, bVar.getHeight());
        int size = View.MeasureSpec.getSize(childHeightMeasureSpec);
        return size > bVar.s() ? View.MeasureSpec.makeMeasureSpec(bVar.s(), View.MeasureSpec.getMode(childHeightMeasureSpec)) : size < bVar.q() ? View.MeasureSpec.makeMeasureSpec(bVar.q(), View.MeasureSpec.getMode(childHeightMeasureSpec)) : childHeightMeasureSpec;
    }

    public final int n(int i5, b bVar, int i6) {
        oe.a aVar = this.a;
        int childWidthMeasureSpec = aVar.getChildWidthMeasureSpec(i5, bVar.p() + bVar.j() + aVar.getPaddingRight() + aVar.getPaddingLeft() + i6, bVar.getWidth());
        int size = View.MeasureSpec.getSize(childWidthMeasureSpec);
        return size > bVar.u() ? View.MeasureSpec.makeMeasureSpec(bVar.u(), View.MeasureSpec.getMode(childWidthMeasureSpec)) : size < bVar.e() ? View.MeasureSpec.makeMeasureSpec(bVar.e(), View.MeasureSpec.getMode(childWidthMeasureSpec)) : childWidthMeasureSpec;
    }

    public final void o(View view, FlexLine flexLine, int i5, int i6, int i10, int i11) {
        b bVar = (b) view.getLayoutParams();
        oe.a aVar = this.a;
        int alignItems = aVar.getAlignItems();
        if (bVar.b() != -1) {
            alignItems = bVar.b();
        }
        int i12 = flexLine.f5585g;
        if (alignItems != 0) {
            if (alignItems == 1) {
                if (aVar.getFlexWrap() != 2) {
                    int i13 = i6 + i12;
                    view.layout(i5, (i13 - view.getMeasuredHeight()) - bVar.g(), i10, i13 - bVar.g());
                    return;
                }
                view.layout(i5, bVar.k() + view.getMeasuredHeight() + (i6 - i12), i10, bVar.k() + view.getMeasuredHeight() + (i11 - i12));
                return;
            }
            if (alignItems == 2) {
                int k = ((bVar.k() + (i12 - view.getMeasuredHeight())) - bVar.g()) / 2;
                if (aVar.getFlexWrap() != 2) {
                    int i14 = i6 + k;
                    view.layout(i5, i14, i10, view.getMeasuredHeight() + i14);
                    return;
                } else {
                    int i15 = i6 - k;
                    view.layout(i5, i15, i10, view.getMeasuredHeight() + i15);
                    return;
                }
            }
            if (alignItems == 3) {
                if (aVar.getFlexWrap() != 2) {
                    int max = Math.max(flexLine.f5588l - view.getBaseline(), bVar.k());
                    view.layout(i5, i6 + max, i10, i11 + max);
                    return;
                } else {
                    int max2 = Math.max(view.getBaseline() + (flexLine.f5588l - view.getMeasuredHeight()), bVar.g());
                    view.layout(i5, i6 - max2, i10, i11 - max2);
                    return;
                }
            }
            if (alignItems != 4) {
                return;
            }
        }
        if (aVar.getFlexWrap() != 2) {
            view.layout(i5, bVar.k() + i6, i10, bVar.k() + i11);
        } else {
            view.layout(i5, i6 - bVar.g(), i10, i11 - bVar.g());
        }
    }

    public final void p(View view, FlexLine flexLine, boolean z5, int i5, int i6, int i10, int i11) {
        b bVar = (b) view.getLayoutParams();
        int alignItems = this.a.getAlignItems();
        if (bVar.b() != -1) {
            alignItems = bVar.b();
        }
        int i12 = flexLine.f5585g;
        if (alignItems != 0) {
            if (alignItems == 1) {
                if (!z5) {
                    view.layout(((i5 + i12) - view.getMeasuredWidth()) - bVar.p(), i6, ((i10 + i12) - view.getMeasuredWidth()) - bVar.p(), i11);
                    return;
                }
                view.layout(bVar.j() + view.getMeasuredWidth() + (i5 - i12), i6, bVar.j() + view.getMeasuredWidth() + (i10 - i12), i11);
                return;
            }
            if (alignItems == 2) {
                ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) view.getLayoutParams();
                int marginStart = ((marginLayoutParams.getMarginStart() + (i12 - view.getMeasuredWidth())) - marginLayoutParams.getMarginEnd()) / 2;
                if (z5) {
                    view.layout(i5 - marginStart, i6, i10 - marginStart, i11);
                    return;
                } else {
                    view.layout(i5 + marginStart, i6, i10 + marginStart, i11);
                    return;
                }
            }
            if (alignItems != 3 && alignItems != 4) {
                return;
            }
        }
        if (z5) {
            view.layout(i5 - bVar.p(), i6, i10 - bVar.p(), i11);
        } else {
            view.layout(bVar.j() + i5, i6, bVar.j() + i10, i11);
        }
    }

    public final void q(int i5, int i6, FlexLine flexLine, int i10, int i11, boolean z5) {
        float f2;
        float f10;
        int i12;
        int i13;
        int i14;
        int i15 = flexLine.f5583e;
        float f11 = flexLine.k;
        float f12 = 0.0f;
        if (f11 <= 0.0f || i10 > i15) {
            return;
        }
        float f13 = (i15 - i10) / f11;
        flexLine.f5583e = i11 + flexLine.f5584f;
        if (!z5) {
            flexLine.f5585g = Integer.MIN_VALUE;
        }
        int i16 = 0;
        boolean z6 = false;
        int i17 = 0;
        float f14 = 0.0f;
        while (i16 < flexLine.f5586h) {
            int i18 = flexLine.f5591o + i16;
            oe.a aVar = this.a;
            View reorderedFlexItemAt = aVar.getReorderedFlexItemAt(i18);
            if (reorderedFlexItemAt == null || reorderedFlexItemAt.getVisibility() == 8) {
                f2 = f12;
                f10 = f13;
            } else {
                b bVar = (b) reorderedFlexItemAt.getLayoutParams();
                int flexDirection = aVar.getFlexDirection();
                f2 = f12;
                if (flexDirection == 0 || flexDirection == 1) {
                    f10 = f13;
                    int measuredWidth = reorderedFlexItemAt.getMeasuredWidth();
                    long[] jArr = this.f5598e;
                    if (jArr != null) {
                        measuredWidth = (int) jArr[i18];
                    }
                    int measuredHeight = reorderedFlexItemAt.getMeasuredHeight();
                    long[] jArr2 = this.f5598e;
                    if (jArr2 != null) {
                        measuredHeight = (int) (jArr2[i18] >> 32);
                    }
                    if (!this.f5595b[i18] && bVar.c() > f2) {
                        float c6 = measuredWidth - (bVar.c() * f10);
                        if (i16 == flexLine.f5586h - 1) {
                            c6 += f14;
                            f14 = f2;
                        }
                        int round = Math.round(c6);
                        if (round < bVar.e()) {
                            i13 = bVar.e();
                            this.f5595b[i18] = true;
                            flexLine.k -= bVar.c();
                            z6 = true;
                        } else {
                            float f15 = (c6 - round) + f14;
                            double d6 = f15;
                            if (d6 > 1.0d) {
                                i13 = round + 1;
                                f15 -= 1.0f;
                            } else if (d6 < -1.0d) {
                                i13 = round - 1;
                                f15 += 1.0f;
                            } else {
                                i13 = round;
                            }
                            f14 = f15;
                        }
                        int m5 = m(i6, bVar, flexLine.f5589m);
                        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(i13, 1073741824);
                        reorderedFlexItemAt.measure(makeMeasureSpec, m5);
                        int measuredWidth2 = reorderedFlexItemAt.getMeasuredWidth();
                        int measuredHeight2 = reorderedFlexItemAt.getMeasuredHeight();
                        v(i18, makeMeasureSpec, m5, reorderedFlexItemAt);
                        aVar.updateViewCache(i18, reorderedFlexItemAt);
                        measuredWidth = measuredWidth2;
                        measuredHeight = measuredHeight2;
                    }
                    int max = Math.max(i17, aVar.getDecorationLengthCrossAxis(reorderedFlexItemAt) + bVar.g() + bVar.k() + measuredHeight);
                    flexLine.f5583e = bVar.p() + bVar.j() + measuredWidth + flexLine.f5583e;
                    i12 = max;
                } else {
                    int measuredHeight3 = reorderedFlexItemAt.getMeasuredHeight();
                    long[] jArr3 = this.f5598e;
                    if (jArr3 != null) {
                        measuredHeight3 = (int) (jArr3[i18] >> 32);
                    }
                    int measuredWidth3 = reorderedFlexItemAt.getMeasuredWidth();
                    long[] jArr4 = this.f5598e;
                    if (jArr4 != null) {
                        measuredWidth3 = (int) jArr4[i18];
                    }
                    if (this.f5595b[i18] || bVar.c() <= f2) {
                        f10 = f13;
                    } else {
                        float c8 = measuredHeight3 - (bVar.c() * f13);
                        if (i16 == flexLine.f5586h - 1) {
                            c8 += f14;
                            f14 = f2;
                        }
                        int round2 = Math.round(c8);
                        if (round2 < bVar.q()) {
                            i14 = bVar.q();
                            this.f5595b[i18] = true;
                            flexLine.k -= bVar.c();
                            z6 = true;
                            f10 = f13;
                        } else {
                            float f16 = (c8 - round2) + f14;
                            f10 = f13;
                            double d7 = f16;
                            if (d7 > 1.0d) {
                                i14 = round2 + 1;
                                f16 -= 1.0f;
                            } else if (d7 < -1.0d) {
                                i14 = round2 - 1;
                                f16 += 1.0f;
                            } else {
                                i14 = round2;
                            }
                            f14 = f16;
                        }
                        int n6 = n(i5, bVar, flexLine.f5589m);
                        int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(i14, 1073741824);
                        reorderedFlexItemAt.measure(n6, makeMeasureSpec2);
                        int measuredWidth4 = reorderedFlexItemAt.getMeasuredWidth();
                        int measuredHeight4 = reorderedFlexItemAt.getMeasuredHeight();
                        v(i18, n6, makeMeasureSpec2, reorderedFlexItemAt);
                        aVar.updateViewCache(i18, reorderedFlexItemAt);
                        measuredWidth3 = measuredWidth4;
                        measuredHeight3 = measuredHeight4;
                    }
                    i12 = Math.max(i17, aVar.getDecorationLengthCrossAxis(reorderedFlexItemAt) + bVar.p() + bVar.j() + measuredWidth3);
                    flexLine.f5583e = bVar.g() + bVar.k() + measuredHeight3 + flexLine.f5583e;
                }
                flexLine.f5585g = Math.max(flexLine.f5585g, i12);
                i17 = i12;
            }
            i16++;
            f12 = f2;
            f13 = f10;
        }
        if (!z6 || i15 == flexLine.f5583e) {
            return;
        }
        q(i5, i6, flexLine, i10, i11, true);
    }

    public final void s(View view, int i5, int i6) {
        b bVar = (b) view.getLayoutParams();
        int j = (i5 - bVar.j()) - bVar.p();
        oe.a aVar = this.a;
        int min = Math.min(Math.max(j - aVar.getDecorationLengthCrossAxis(view), bVar.e()), bVar.u());
        long[] jArr = this.f5598e;
        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(jArr != null ? (int) (jArr[i6] >> 32) : view.getMeasuredHeight(), 1073741824);
        int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(min, 1073741824);
        view.measure(makeMeasureSpec2, makeMeasureSpec);
        v(i6, makeMeasureSpec2, makeMeasureSpec, view);
        aVar.updateViewCache(i6, view);
    }

    public final void t(View view, int i5, int i6) {
        b bVar = (b) view.getLayoutParams();
        int k = (i5 - bVar.k()) - bVar.g();
        oe.a aVar = this.a;
        int min = Math.min(Math.max(k - aVar.getDecorationLengthCrossAxis(view), bVar.q()), bVar.s());
        long[] jArr = this.f5598e;
        int makeMeasureSpec = View.MeasureSpec.makeMeasureSpec(jArr != null ? (int) jArr[i6] : view.getMeasuredWidth(), 1073741824);
        int makeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(min, 1073741824);
        view.measure(makeMeasureSpec, makeMeasureSpec2);
        v(i6, makeMeasureSpec, makeMeasureSpec2, view);
        aVar.updateViewCache(i6, view);
    }

    public final void u(int i5) {
        View reorderedFlexItemAt;
        oe.a aVar = this.a;
        if (i5 >= aVar.getFlexItemCount()) {
            return;
        }
        int flexDirection = aVar.getFlexDirection();
        if (aVar.getAlignItems() != 4) {
            for (FlexLine flexLine : aVar.getFlexLinesInternal()) {
                Iterator it = flexLine.f5590n.iterator();
                while (it.hasNext()) {
                    Integer num = (Integer) it.next();
                    View reorderedFlexItemAt2 = aVar.getReorderedFlexItemAt(num.intValue());
                    if (flexDirection == 0 || flexDirection == 1) {
                        t(reorderedFlexItemAt2, flexLine.f5585g, num.intValue());
                    } else {
                        if (flexDirection != 2 && flexDirection != 3) {
                            throw new IllegalArgumentException(d.i(flexDirection, "Invalid flex direction: "));
                        }
                        s(reorderedFlexItemAt2, flexLine.f5585g, num.intValue());
                    }
                }
            }
            return;
        }
        int[] iArr = this.f5596c;
        List flexLinesInternal = aVar.getFlexLinesInternal();
        int size = flexLinesInternal.size();
        for (int i6 = iArr != null ? iArr[i5] : 0; i6 < size; i6++) {
            FlexLine flexLine2 = (FlexLine) flexLinesInternal.get(i6);
            int i10 = flexLine2.f5586h;
            for (int i11 = 0; i11 < i10; i11++) {
                int i12 = flexLine2.f5591o + i11;
                if (i11 < aVar.getFlexItemCount() && (reorderedFlexItemAt = aVar.getReorderedFlexItemAt(i12)) != null && reorderedFlexItemAt.getVisibility() != 8) {
                    b bVar = (b) reorderedFlexItemAt.getLayoutParams();
                    if (bVar.b() == -1 || bVar.b() == 4) {
                        if (flexDirection == 0 || flexDirection == 1) {
                            t(reorderedFlexItemAt, flexLine2.f5585g, i12);
                        } else {
                            if (flexDirection != 2 && flexDirection != 3) {
                                throw new IllegalArgumentException(d.i(flexDirection, "Invalid flex direction: "));
                            }
                            s(reorderedFlexItemAt, flexLine2.f5585g, i12);
                        }
                    }
                }
            }
        }
    }

    public final void v(int i5, int i6, int i10, View view) {
        long[] jArr = this.f5597d;
        if (jArr != null) {
            jArr[i5] = (i6 & 4294967295L) | (i10 << 32);
        }
        long[] jArr2 = this.f5598e;
        if (jArr2 != null) {
            jArr2[i5] = (view.getMeasuredWidth() & 4294967295L) | (view.getMeasuredHeight() << 32);
        }
    }
}
